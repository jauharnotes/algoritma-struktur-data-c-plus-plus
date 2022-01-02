#include <iostream>
#include <string.h>
using namespace std;
struct info {
   char student_name[50];
   char favorite_subject[20];
   int id;
};
void display( struct info each_student );
int main() {
   struct info s1;     
   strcpy( s1.student_name, "Tom Sawer");
   strcpy( s1.favorite_subject, "English");
   s1.id = 20;
// printing first student details!
   display(s1);
   return 0;
}

void display( struct info each_student ) {
   cout<<"Name of first student: "<< each_student.student_name<<endl;
   cout<<"Favourite subject of first student: "<<each_student.favorite_subject<<endl;
   cout<<"ID of first student: "<<each_student.id<<endl;
}
