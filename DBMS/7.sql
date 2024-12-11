create table student
(
st_name varchar(25) not null,
maths int not null,
english int not null,
total int
);

create trigger add_data
before insert on 14_august.employees
for each row
set new.total = new.salary * new.commissio_pct;

insert into student(st_name,maths,english) values('Rahul',85,74);
insert into student(st_name,maths,english) values('Yash',45,74);
insert into student(st_name,maths,english) values('Mayank',75,74);
insert into student(st_name,maths,english) values('Kunj',85,64);
insert into student(st_name,maths,english) values('Savan',55,74);

select * from student;