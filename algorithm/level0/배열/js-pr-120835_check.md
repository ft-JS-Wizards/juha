### 문제 소개

[진료순서 정하기](https://school.programmers.co.kr/learn/courses/30/lessons/120835)

<details>
<summary>문제</summary>
<div markdown="1">

외과의사 머쓱이는 응급실에 온 환자의 응급도를 기준으로 진료 순서를 정하려고 합니다.
정수 배열 emergency가 매개변수로 주어질 때 응급도가 높은 순서대로 진료 순서를 정한 배열을 return하도록 solution 함수를 완성해주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(emergency) {
  let arr = new Array(emergency.length).fill(1);

  for (let i = 0; i < emergency.length; i++) {
    for (let cmp = i + 1; cmp < emergency.length; cmp++) {
      if (emergency[i] < emergency[cmp]) arr[i]++;
      else arr[cmp]++;
    }
  }
  return arr;
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(emergency) {
  let sorted = emergency.slice().sort((a, b) => b - a);

  return emergency.map((v) => sorted.indexOf(v) + 1);
}
```

</div>
</details>

# 소감

- 2중 for문은 웬만하면 쓰지말자
