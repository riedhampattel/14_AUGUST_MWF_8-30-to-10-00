select * from employees;

delete from employees where department_id = 90;

select * from employees;

rollback;

select * from employees;

delete from employees where department_id = 90;

select * from employees;

commit;

rollback;

select * from employees;

delete from employees where department_id = 60;

commit;

delete from employees where department_id = 80;

select * from employees;

rollback;

select * from employees;

savepoint s1;
update employees set department_id = 500 where department_id = 50;

savepoint s2;
update employees set department_id = 800 where department_id = 80;

savepoint s3;
update employees set department_id = 200 where department_id = 20;

select * from employees;

rollback to s2;

select * from employees;