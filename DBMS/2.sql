insert into employees values(100,'Steven','King','1987-7-17',24000,null,null,90);

insert into employees values(101,'Steven','King','1987-7-17',24000,null,null,90);

insert into employees values(102,'Steven','King','1987-7-17',24000,null,null,90);

select employee_id,first_name,salary from employees;

select * from employees;

update employees set salary = salary + 1000 where employee_id = 100;

select * from employees;

