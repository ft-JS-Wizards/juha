### 문제 소개

[짝수의 합](https://school.programmers.co.kr/learn/courses/30/lessons/120831)

<details>
<summary>문제</summary>
<div markdown="1">

정수 n이 주어질 때,
n이하의 짝수를 모두 더한 값을 return 하도록 solution 함수를 작성해주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function f(n, ret) {
  if (!n) return ret;
  return f(n - 1, n % 2 ? ret : (ret += n));
}

function solution(n) {
  return f(n, 0);
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(n) {
  const half = Math.floor(n / 2);
  return half * (half + 1);
}
```

</div>
</details>

## 소감

- 수학좀... 잘 써봐
