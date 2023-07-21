#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
 
 // the class that stores data
class student
{
int rollno;
char name[50];
int eng_marks, math_marks, sci_marks, lang2_marks, cs_marks;
double average;
char grade;

public:
void getdata();
void showdata() const;
void calculate();
int retrollno() const;
20 }; //class ends here
21 
22 void student::calculate()
23 {
24 average=(eng_marks+math_marks+sci_marks+lang2_marks+cs_marks)/5.0;
25 if(average>=90)
26 grade='A';
27 else if(average>=75)
28: grade='B';
29: else if(average>=50)
30: grade='C';
31: else
32: grade='F';
33: }
34: 
35: void student::getdata()
36: {
37: cout<<"\nEnter student's roll number: ";
38: cin>>rollno;
39: cout<<"\n\nEnter student name: ";
40: cin.ignore();
41: cin.getline(name,50);
42: cout<<"\nAll marks should be out of 100";
43: cout<<"\nEnter marks in English: ";
44: cin>>eng_marks;
45: cout<<"\nEnter marks in Math: ";
46: cin>>math_marks;
47: cout<<"\nEnter marks in Science: ";
48: cin>>sci_marks;
49: cout<<"\nEnter marks in 2nd language: ";
50: cin>>lang2_marks;
51: cout<<"\nEnter marks in Computer science: ";
52: cin>>cs_marks;
53: calculate();
54: }
55: void student::showdata() const
56: {
57: cout<<"\nRoll number of student : "<<rollno;
58: cout<<"\nName of student : "<<name;
59: cout<<"\nEnglish : "<<eng_marks;
60: cout<<"\nMaths : "<<math_marks;
61: cout<<"\nScience : "<<sci_marks;
62: cout<<"\nLanguage2 : "<<lang2_marks;
63: cout<<"\nComputer Science :"<<cs_marks;
64: cout<<"\nAverage Marks :"<<average;
65: cout<<"\nGrade of student is :"<<grade;
66: }
67: int student::retrollno() const
68: {
69: return rollno;
70: }
71: //function declaration
72: void create_student();
73: void display_sp(int);//display particular record
74: void display_all(); // display all records
75: void delete_student(int);//delete particular record
76: void change_student(int);//edit particular record
77: //MAIN
78: int main()
79: {
80: char ch;
81: cout<<setprecision(2);
82: do
83: {
84: char ch;
85: int num;
86: system("cls");
87: cout<<"\n\n\n\tMENU";
88: cout<<"\n\n\t1.Create student record";
89: cout<<"\n\n\t2. Search student record";
90: cout<<"\n\n\t3. Display all students records ";
91: cout<<"\n\n\t4.Delete student record";
92: cout<<"\n\n\t5.Modify student record";
93: cout<<"\n\n\t6.Exit";
94: cout<<"\n\n\What is your Choice (1/2/3/4/5/6) ";
95: cin>>ch;
96: system("cls");
97: switch(ch)
98: {
99: case '1': create_student(); break;
100: case '2': cout<<"\n\n\tEnter The roll number ";
101: cin>>num;
102: display_sp(num); break;
103: case '3': display_all(); break;
104: case '4': cout<<"\n\n\tEnter The roll number: ";
105: cin>>num;
106: delete_student(num);break;
107: case '5': cout<<"\n\n\tEnter The roll number "; cin>>num;
108: change_student(num);break;
109: case '6': cout<<"Exiting, Thank you!";exit(0);
110: }
111: }while(ch!='6');
112: return 0;
113: }
114: //write student details to file
115: void create_student()
116: {
117: student stud;
118: ofstream oFile;
119: oFile.open("student.dat",ios::binary|ios::app);
120: stud.getdata();
121: oFile.write(reinterpret_cast<char *> (&stud), sizeof(student));
122: oFile.close();
123: cout<<"\n\nStudent record Has Been Created ";
124: cin.ignore();
125: cin.get();
126: }
127: // read file records
128: void display_all()
129: {
130: student stud;
131: ifstream inFile;
132: inFile.open("student.dat",ios::binary);
133: if(!inFile)
134: {
135: cout<<"File could not be opened !! Press any Key to exit";
136: cin.ignore();
137: cin.get();
138: return;
139: }
140: cout<<"\n\n\n\t\tDISPLAYING ALL RECORDS\n\n";
141: while(inFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
142: {
143: st.showdata();
144: cout<<"\n\n====================================\n";
145: }
146: inFile.close();
147: cin.ignore();
148: cin.get();
149: }
150: //read specific record based on roll number
151: void display_sp(int n)
152: {
153: student stud;
154: ifstream iFile;
155: iFile.open("student.dat",ios::binary);
156: if(!iFile)
157: {
158: cout<<"File could not be opened... Press any Key to exit";
159: cin.ignore();
160: cin.get();
161: return;
162: }
163: bool flag=false;
164: while(iFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
165: {
166: if(stud.retrollno()==n)
167: {
168: stud.showdata();
169: flag=true;
170: }
171: }
172: iFile.close();
173: if(flag==false)
174: cout<<"\n\nrecord does not exist";
175: cin.ignore();
176: cin.get();
177: }
178: // modify record for specified roll number
179: void change_student(int n)
180: {
181: bool found=false;
182: student stud;
183: fstream fl;
184: fl.open("student.dat",ios::binary|ios::in|ios::out);
185: if(!fl)
186: {
187: cout<<"File could not be opened. Press any Key to exit...";
188: cin.ignore();
189: cin.get();
190: return;
191: }
192: while(!fl.eof() && found==false)
193: {
194: fl.read(reinterpret_cast<char *> (&stud), sizeof(student));
195: if(stud.retrollno()==n)
196: {
197: stud.showdata();
198: cout<<"\n\Enter new student details:"<<endl;
199: stud.getdata();
200: int pos=(-1)*static_cast<int>(sizeof(stud));
201: fl.seekp(pos,ios::cur);
202: fl.write(reinterpret_cast<char *> (&stud), sizeof(student));
203: cout<<"\n\n\t Record Updated";
204: found=true;
205: }
206: }
207: File.close();
208: if(found==false)
209: cout<<"\n\n Record Not Found ";
210: cin.ignore();
211: cin.get();
212: }
213: //delete record with particular roll number
214: void delete_student(int n)
215: {
216: student stud;
217: ifstream iFile;
218: iFile.open("student.dat",ios::binary);
219: if(!iFile)
220: {
221: cout<<"File could not be opened... Press any Key to exit...";
222: cin.ignore();
223: cin.get();
224: return;
225: }
226: ofstream oFile;
227: oFile.open("Temp.dat",ios::out);
228: iFile.seekg(0,ios::beg);
229: while(iFile.read(reinterpret_cast<char *> (&stud), sizeof(student)))
230: {
231: if(stud.retrollno()!=n)
232: {
233: oFile.write(reinterpret_cast<char *> (&stud), sizeof(student));
234: }
235: }
236: oFile.close();
237: iFile.close();
238: remove("student.dat");
239: rename("Temp.dat","student.dat");
240: cout<<"\n\n\tRecord Deleted ..";
241: cin.ignore();
242: cin.get();
243: }
244: 
