select employee_id,first_name,salary from employees;

select * from employees;

alter table employees modify HIRE_DATE varchar(25) not null;

update employees set HIRE_DATE = date_format(HIRE_DATE,'%d-%b-%y');

select * from employees;

select employee_id,first_name,last_name,salary*12 as annual_salary from employees;

select * from employees;

select employee_id,first_name,HIRE_DATE as DATE from employees;

select * from employees;

select * from employees where department_id = 50;

select * from employees where commission_pct is not null;

select * from employees where commission_pct is null;

select employee_id,concat(first_name,last_name) as name,salary from employees;

select employee_id,concat(first_name,concat(' ',last_name)) as name,salary from employees;

select * from employees;

select * from employees where manager_id = 100 and department_id = 90;

select * from employees where manager_id = 100 or department_id = 90;

select * from employees where salary>=10000 and salary<=20000;

select * from employees where salary between 10000 and 20000;

select * from employees where department_id = 60 or department_id = 50 or department_id = 90;

select * from employees where department_id in (60,50,90);

select * from employees where department_id not in (60,50,90);

select * from employees;

select * from employees order by salary;

select * from employees order by salary desc;

select employee_id,first_name as name from employees order by name;

select * from employees order by 8;

select * from employees where first_name like '%e%e%';

select * from employees where first_name like '%ee%';

select * from employees where first_name like '%e_';

select * from employees where hire_date like '%-j_n-%';

select * from employees where hire_date like '%-ju_-%';