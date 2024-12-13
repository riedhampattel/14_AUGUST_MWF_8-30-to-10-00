delimiter &&
create procedure data()
select * from employees;
end &&

call data();

drop procedure data;

delimiter &&
create procedure dept_data(in num int)
begin
select * from employees where department_id = num;
end &&

call dept_data(50);

drop procedure dept_data;

create view emp_data as select employee_id,first_name,last_name from employees;

select * from emp_data;