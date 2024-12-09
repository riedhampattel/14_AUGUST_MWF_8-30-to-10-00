create role students;

create user rahul identified by 'abc@123' default role students;

grant select on 14_august.employees to rahul;

revoke select on 14_august.employees from rahul;

grant update on 14_august.employees to rahul;

grant insert on 14_august.employees to rahul;

grant select on 14_august.employees to rahul;

revoke insert on 14_august.employees from rahul;