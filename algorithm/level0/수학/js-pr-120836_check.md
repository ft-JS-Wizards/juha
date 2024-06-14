### 문제 소개

[순서쌍의 개수](https://school.programmers.co.kr/learn/courses/30/lessons/120836)

<details>
<summary>문제</summary>
<div markdown="1">

순서쌍이란 두 개의 숫자를 순서를 정하여 짝지어 나타낸 쌍으로 (a, b)로 표기합니다.
자연수 n이 매개변수로 주어질 때
두 숫자의 곱이 n인 자연수 순서쌍의 개수를 return하도록 solution 함수를 완성해주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(n) {
  if (n == 1) return 1;

  const arr = [1, n];
  let answer = 0;

  while (arr[0] < arr[1]) {
    if (n % arr[0] == 0) {
      arr[1] = n / arr[0];
      answer++;
    }
    arr[0]++;
  }

  if (arr[0] == arr[1]) return answer * 2;
  return answer + (answer - 1);
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(n) {
  let ans = 0;

  for (let i = 1; i < Math.sqrt(n); i++) if (n % i === 0) ans += 2;

  return Number.isInteger(Math.sqrt(n)) ? ans + 1 : ans;
}
```

</div>
</details>

<details>
<summary>유저 풀이2</summary>
<div markdown="2">

```js
function solution(n) {
  return Array(n)
    .fill(1)
    .map((v, idx) => v + idx)
    .filter((v) => n % v === 0).length;
}
```

</div>
</details>

## 소감

- 알고리즘? 쉽지않다
