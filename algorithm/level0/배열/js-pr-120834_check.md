### 문제 소개

[외계행성의 나이](https://school.programmers.co.kr/learn/courses/30/lessons/120834)

<details>
<summary>문제</summary>
<div markdown="1">

우주여행을 하던 머쓱이는 엔진 고장으로 PROGRAMMERS-962 행성에 불시착하게 됐습니다.
입국심사에서 나이를 말해야 하는데,
PROGRAMMERS-962 행성에서는 나이를 알파벳으로 말하고 있습니다.
a는 0, b는 1, c는 2, ..., j는 9입니다.
예를 들어 23살은 cd, 51살은 fb로 표현합니다.
나이 age가 매개변수로 주어질 때,
PROGRAMMER-962식 나이를 return하도록 solution 함수를 완성해주세요.

</div>
</details>

### 소스 코드 작성

#### juha 풀이

```js
function solution(age) {
  let length = ('' + age).length;
  let answer = [];

  do {
    switch (~~age % 10) {
      case 0:
        answer.push('a');
        break;
      case 1:
        answer.push('b');
        break;
      case 2:
        answer.push('c');
        break;
      case 3:
        answer.push('d');
        break;
      case 4:
        answer.push('e');
        break;
      case 5:
        answer.push('f');
        break;
      case 6:
        answer.push('g');
        break;
      case 7:
        answer.push('h');
        break;
      case 8:
        answer.push('i');
        break;
      case 9:
        answer.push('j');
        break;
    }
    age /= 10;
  } while (--length);

  return answer.reverse().join('');
}
```

<details>
<summary>유저 풀이</summary>
<div markdown="2">

```js
function solution(age) {
  return age
    .toString()
    .split('')
    .map((v) => 'abcdefghij'[v])
    .join('');
}
```

</div>
</details>

# 소감

- 조금 더 신선한 생각들이 필요하다!
