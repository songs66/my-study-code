let a=['apple', 'banana', 'banana'];
console.log(a);
console.log(a[0]);
console.log(a[1]);
for (let i = 0; i < a.length; i++) {
    console.log(i);
    console.log(a[i]);
    console.log('hello world'+i);
}

//对象创建方式一
function demo1(){
    const obj={};
    obj.name='张三';
    obj.age=2;
    obj.functions=function(){
    }
    return obj;
}
const one=demo1();
console.log(one);
console.log(one.name);
console.log(one.age);
//对象创建方式二
function demo2(){
    this.name='李四';
    this.age=22;
    this.functions=function(){}
}
const two=new demo2;
console.log(two);
console.log(two.name);
console.log(two.age);

//变量转换类型
let a1=123;
let a2=123;
let a3=a1.toString();
let a4=a2.toString();
console.log(a3+a4);
let a5='123.456';
let a6=parseInt(a3);
let a7=parseFloat(a5);
console.log(a6+a7);

