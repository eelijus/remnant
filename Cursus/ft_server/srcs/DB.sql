CREATE DATABASE IF NOT EXISTS wordpress;
CREATE USER IF NOT EXISTS 'sujilee'@'localhost' IDENTIFIED BY '1206';
GRANT ALL PRIVILEGES ON wordpress.* TO 'sujilee'@'localhost' WITH GRANT OPTION;
