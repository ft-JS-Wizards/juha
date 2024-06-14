// [https://ko.javascript.info/object]

// ---------------------객체야 안녕?------------------------
console.log('---------------------객체야 안녕?------------------------');

/*
	다음 각 동작을 한 줄씩, 코드로 작성해보세요.

	빈 객체 user를 만듭니다.
	user에 키가 name, 값이 John인 프로퍼티를 추가하세요.
	user에 키가 surname, 값이 Smith인 프로퍼티를 추가하세요.
	name의 값을 Pete로 수정해보세요.
	user에서 프로퍼티 name을 삭제하세요.
*/

let user = {};

user.name = 'John';
console.log('user:', user);

user.surname = 'smith';
console.log('user:', user);

user.name = 'Pete';
console.log('user:', user);

delete user.name;
console.log('user:', user);

// ---------------객체가 비어있는지 확인하기-----------------
console.log('\n----------------객체가 비어있는지 확인하기----------------');

/*
	객체에 프로퍼티가 하나도 없는 경우 true, 그렇지 않은 경우 false를 반환해주는 함수 isEmpty(obj)를 만들어 보세요.
	아래와 같이 동작해야 합니다.
*/

function isEmpty(schedule) {
  return Object.values(schedule).length === 0;
}

let schedule = {};
console.log('ture :', isEmpty(schedule)); // true

schedule['8:30'] = 'get up';
console.log('false :', isEmpty(schedule)); // false

// ------------------변하지 않는 객체? ---------------------
console.log('\n------------------변하지 않는 객체? ---------------------');
/*
	const와 함께 선언한 객체를 변경하는 게 가능할까요? 생각을 공유해주세요!
	네!
*/
const user1 = {
  name: 'John',
};
user1.name = 'Pete';
console.log('origin:', user1);

// tip : !freeze
Object.freeze(user1);
console.log('freeze object user = ', user1);
console.log('user is frozen object:', Object.isFrozen(user1));
console.log('try to change user1.name to juha');
user1.name = 'juha';
console.log('frozen object user = ', user1);
// user.name = 'juha';

// ----------프로퍼티 합계 구하기---------------------------
console.log('\n----------프로퍼티 합계 구하기---------------------------');
/*
	모든 팀원의 월급에 대한 정보를 담고 있는 객체가 있다고 해봅시다.
	모든 팀원의 월급을 합한 값을 구하고, 
	그값을 변수 sum에 저장해주는 코드를 작성해보세요. 
	sum엔 390이 저장되어야겠죠?
	주의: salaries가 비어있다면 sum에 0이 저장되어야 합니다.
*/
const salaries = {
  John: 100,
  Ann: 160,
  Pete: 130,
};

function sumObject1(obj) {
  let sum = 0;

  // entries
  console.log('Object.entries(obj) : ', Object.entries(obj));
  for (const [_, v] of Object.entries(obj)) {
    sum += v;
  }
  return sum;
}

function sumObject2(obj) {
  console.log('Object.values(obj) : ', Object.values(obj));
  return Object.values(obj).reduce((acc, v) => acc + v);
}

console.log('sum 390 = sum ', sumObject1(salaries));
console.log('sum 390 = sum ', sumObject2(salaries));

// -------------------- 프로퍼티 값을 두배로 불리기 ----------------------
console.log(
  '-------------------- 프로퍼티 값을 두배로 불리기 ----------------------'
);
/*
	객체 obj의 프로퍼티 값이 숫자인 경우 그 값을 두 배 해주는 함수 multiplyNumeric(obj)을 만들어보세요.
*/
salaries.title = 'multiple property';

console.log('origin : ', salaries);
function multipleNumericProperty(obj) {
  for (const [key, value] of Object.entries(obj)) {
    if (typeof value === 'number') obj[key] *= 2;
  }

  return obj;
}
console.log('double : ', multipleNumericProperty(salaries));
