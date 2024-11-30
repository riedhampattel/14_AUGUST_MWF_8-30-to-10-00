create schema 14_august;

create table employees
(
employee_id int unique not null,
first_name varchar(25) not null,
last_name varchar(25) not null,
hire_date date not null,
salary int not null,
commission_pct float,
manager_id int,
department_id int
);

describe employees;

describe emp_data;

-- rename table
alter table employees rename to emp_data;
alter table emp_data rename to employees;

describe employees;

describe emp_data;

-- rename column
alter table employees rename column hire_date to date;
alter table employees rename column date to hire_date;

describe employees;

-- modify column
alter table employees modify manager_id varchar(25);
alter table employees modify manager_id int;

-- add column
alter table employees add column job_id int not null;

-- add column at specific position
alter table employees add column job_id int not null after hire_date;

describe employees;

-- drop column
alter table employees drop column job_id;

describe employees;

drop schema emp;

drop table orders;