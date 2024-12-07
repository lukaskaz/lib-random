# lib-random
Library for random generators

lukasz@Mobilestation:~/git/lib-random$ docker build --build-arg EXECTORUN=examples/basic/basic -t random-generators-lib .<br>
-<br>
lukasz@Mobilestation:~/git/lib-random$ docker run -t random-generators-lib<br>
Uniform int values: 5, 2, 1<br>
Uniform double values: 4.21045, 4.31723, 4.53509<br>
lukasz@Mobilestation:~/git/lib-random$ docker run -t random-generators-lib<br>
Uniform int values: 1, 5, 6<br>
Uniform double values: 4.18375, 4.73239, 4.25367

