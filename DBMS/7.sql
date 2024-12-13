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

create table history1
(
id int not null,
name varchar(25)
);

create table copy_tbl
(
id int not null,
name varchar(25),
copy_time time
);

create trigger copy_data
after insert on 14_august.history1
for each row
insert into copy_tbl values(new.id,new.name,curtime());

select * from history1;

select * from copy_tbl;

insert into history1 values(101,'Rohan');
insert into history1 values(102,'Rahul');
insert into history1 values(103,'Mahesh');
insert into history1 values(104,'Prit');
insert into history1 values(105,'Tej');

select * from history1;

select * from copy_tbl;