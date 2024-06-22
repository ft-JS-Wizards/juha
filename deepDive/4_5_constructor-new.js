// [https://ko.javascript.info/constructor-new]

// ---------------------함수 두 개로 동일한 객체 만들기------------------------
console.log(
  '---------------------함수 두 개로 동일한 객체 만들기------------------------'
);

/*
  new A() == new B()가 성립 가능한 함수 A와 B를 만드는 게 가능할까요?
*/
const obj = {};

function A() {
  return obj;
}

function B() {
  return obj;
}

let a = new A();
let b = new B();

console.log(a == b); // true

// ---------------------함수 두 개로 동일한 객체 만들기------------------------
console.log(
  '---------------------함수 두 개로 동일한 객체 만들기------------------------'
);

/*
  아래와 같은 세 개의 메서드를 가진 생성자 함수, Calculator를 만들어보세요.

  sum() – 프로퍼티에 저장된 값 두 개를 더한 후 반환합니다.
  mul() – 프로퍼티에 저장된 값 두 개를 곱한 후 반환합니다.
*/
class Calculator {
  a = 2;
  b = 6;
  sum() {
    return this.a + this.b;
  }
  mul() {
    return this.a * this.b;
  }
}

const calculator = new Calculator();

console.log('Sum=' + calculator.sum());
console.log('Mul=' + calculator.mul());

// ---------------------누산기 만들기------------------------
console.log('---------------------누산기 만들기------------------------');

/*
생성자 함수 Accumulator(startingValue)를 만들어 보세요.

Accumulator(startingValue)를 이용해 만드는 객체는 아래와 같은 요건을 충족해야 합니다.

프로퍼티 value에 현재 값(current value)을 저장합니다. 최초 호출 시엔 생성자 함수의 인수, startingValue에서 시작값(starting value)을 받아옵니다.
메서드 read()에선 prompt 함수를 사용해 사용자로부터 숫자를 받아오고, 받은 숫자를 value에 더해줍니다.
프로퍼티 value엔 startingValue와 사용자가 입력한 모든 값의 총합이 더해져 저장됩니다.
*/

class Accumulator {
  current;

  constructor(startingValue) {
    this.current = startingValue;
  }
  read() {
    return (this.current *= 2);
  }
}

let accumulator = new Accumulator(1); // 최초값: 1

accumulator.read(); // 사용자가 입력한 값을 더해줌
accumulator.read(); // 사용자가 입력한 값을 더해줌

console.log(accumulator.current); // 최초값과 사용자가 입력한 모든 값을 더해 출력함
