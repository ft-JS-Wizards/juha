### 문제 소개

[카운트 업](https://school.programmers.co.kr/learn/courses/30/lessons/181920)

<details>
<summary>문제</summary>
<div markdown="1">

정수 start_num와 end_num가 주어질 때,
start_num부터 end_num까지의 숫자를 차례로 담은 리스트를 return하도록 solution 함수를 완성해주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(s, e) {
  return [
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
  ].slice(s, e + 1);
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(start, end) {
  const answer = [];

  for (let i = start; i <= end; i++) {
    answer.push(i);
  }

  return answer;
}
```

</div>
</details>
