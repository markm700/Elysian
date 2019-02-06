#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void member1(void){
	printf("Name: Yilin Li\n");
	printf("Year in School: 2\n");
	printf("Major: Computer Science\n");
	printf("Hobbies: Travel\n");
	printf("Where You Grew Up: Zhongshan,China\n");
	printf("Anything Else: No\n");

}

void member2(void){
printf("******Tristan Linn*******\n");
	printf("I am in my second year of school\n");
	printf("Computer Sceince - Mathematics is my major\n");
	printf("I like to mountaineer and play basketball\n");
	printf("I gre up in Philipsburg Montana\n");
	printf("I have climbed Mount Rainier, Mount Adams, and Mount Hood\n");
}

void member3(void){
   printf("******Micheal Long******\n");
   printf("I am in my second year of school\n");
   printf("Computer Science is my major\n");
   //printf("Hello\n");
   printf("I like to bowl, play video games and go to concerts\n");
   printf("I grew up in Okinowa,Japan/Baltimore,MD and Omaha,NE\n");
   printf("Look up USS Montpelier, October 13th 2012, I was there\n");

}

void member4(void){
	printf("*************Daithi Martin*************\n");
	printf("I have a degree in chemistry and I am a sophmore in the computer sceince program\n");
	printf("I enjoy skiing, whitewater kayaking and mountian biking\n");
	printf("I grew up in Honolulu Hawaii.\n");
	printf("I want to explore AI solutions for controled environment agriculture\n", );

}

void member5(void){
	printf("\n");
	printf("Name: Mark Matas\n");
	printf("Grade: Senior\n");
	printf("Major: Biology and Computer Science\n");
	printf("Hobbies: Sports, Hiking, Videogames, Movies\n");
	printf("I grew up in Lockport, IL and Scottsdale, AZ!\n");
	printf("I believe pandas are the best animal, and would like to own a zoo one day.\n");
}

int main(void){
	printf("**************************\n");
	printf("Our group is called: Elysian\n");
	printf("Our members: \n");
	printf("**************************\n");
	
	member1(); //Yilin
	member2(); //Tristan
	member3(); //Michael
	member4(); //Daithi
	member5(); //Mark
	
	return 0;
}
