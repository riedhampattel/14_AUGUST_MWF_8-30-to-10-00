create table users
(
cu_id int,
name varchar(25) not null,
age int not null
);

insert into users values(101,'Arjun',25);
insert into users values(102,'Mahesh',22);
insert into users values(103,'Ramesh',18);
insert into users values(104,'Suresh',35);
insert into users values(105,'Yash',45);

create table orders
(
cu_id int,
order_no int not null,
order_id int not null,
foreign key orders(cu_id) references users(cu_id)
);

insert into orders values(101,1,123456);
insert into orders values(101,2,123457);
insert into orders values(103,3,123454);
insert into orders values(105,4,123452);
insert into orders values(103,5,123451);

select * from users
natural join
orders;

select users.cu_id,users.name,orders.order_no,orders.order_id
from users
left join orders on users.cu_id = orders.cu_id;

select users.cu_id,users.name,orders.order_no,orders.order_id
from users
right join orders on users.cu_id = orders.cu_id;

select users.cu_id,users.name,orders.order_no,orders.order_id
from users
inner join orders on users.cu_id = orders.cu_id;

select * from users
cross join
orders;

select * from users
union all
select * from orders;

select * from users
union
select * from orders;