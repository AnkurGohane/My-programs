#include<stdio.h>
#include<conio.h>
int main()
{
int city,college,info;
printf("Welcome to college selector!\n\n");
printf("Please select your preferred city\n\n");
printf("1.Mumbai\n2.Thane District (Except Navi Mumbai)\n3.Navi Mumbai\n");
scanf("%d",&city);
switch(city) //option to select the city
{
case 1: //Mumbai
printf("Please Enter your preferred college\n\n");
printf("1)Veermata Jijabai Technological Institute\n2.Fr. Conceicao Rodrigues College of Engineering \n3.Rajiv Gandhi institute of technology\n4)Vidyalankar institute of technology\n5)Atharva college of engg\n6)Vidyavardhanini college of engg\n7)Shri vileparle kelvani mandals dwarkadas college of engg\n8.Don bosco institute of technology\n");
scanf("%d",&college);
switch(college)
{
case 1: //Mumbai college 1 and so on
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch(info)
{
 case 1:
printf("Description:\n\t Veermata Jijabai Technological Institute [VJTI] is one of the oldest engineering colleges in Asia, established in 1887. The institute offers UG, PG, Diploma, and doctoral courses. Admission to B.Tech, M.Tech, MCA, and Ph.D. is based on entrance exams like MHT CET, GATE, MAH MCA CET, and UGC NET. Admission in Diploma courses is based on merit secured in the last qualifying examination. Admission rounds are known as CAPAI (Centralised Admission Process to Autonomous Institutes). The application process is conducted in online mode.VJTI was ranked #4 in zone wise ranking by India Today and #84 by MHRD among the top 100 engineering colleges in India in 2016.");
 break;
 case 2:
printf("Cut-off:\n\tCivil Engineering  97.1 95.8 90.2 percentile \n Computer Engineering 99.94 99.5 97.8 \n ");
 break;
 case 3:
printf("Visiting Companies: \n\t Looking at the 2018-19 placements the highest salary package offered was INR 36 LPA. Some of the top recruiters were Infosys, PWC, L&T, Capgemini, Samsung, Deloitte, Siemens, Wipro, Reliance, Amazon, BYJUs, EY, etc.");
break;
case 4:
printf("Fees: \n\t");
break;
case 5:
printf("Address: \n\tH R Mahajani Rd, Matunga, Mumbai, Maharashtra 400019");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t");
break;
}
break;
case 2:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch(info)
{
case 1:
printf("Description: \n\tFr. Conceicao Rodrigues college of Engineering (Fr. CRCE) will be a center of Excellence in Engineering Education, moulding engineers with state-of-the art technologies, innovative skills and human values matching with the growing expectations of the corporate and the society, thus playing an effective role in nation building. Our College was established in 1984 as part of Fr. Agnel Technical Complex at Bandra, Mumbai by the Society of St. Xavier Pilar and is named after its founder late Rev. Fr. Conceicao Rodrigues. The college is affiliated to University of Mumbai and has acquired a good reputation, among corporate and pear academic institutions, for its academic standards.");
break;
case 2:
printf("Cut-off: \n\tComputer Eng 96.78 94.36 90.33 Electronics and com 93.33 89.6 41.66 Artificial Intelligence 94.63 89.76 68");

break;
case 3:
printf("Visiting Companies: \n\tInfosys,Capgemini,Wipro,TCS,etc");
break;
case 4:
printf("Fees: \n\t150k PA");
break;
case 5:
printf("Address: \n\tFr. Agnel Ashram, Bandstand Promenade, Mount Mary, Bandra West, Mumbai, Maharashtra 400050");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t");
break;
}
break;
case 3:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch(info)
{
case 1:
printf("Description: \n\tRajiv Gandhi Institute of Technology (RGIT) is a private engineering college affiliated to the University of Mumbai. Founded in 1992,[1] the institute is located in Andheri (west), Mumbai, India. The college is run by the Manjara Charitable Trust and was accredited by the All India Council for Technical Education (AICTE).[2] It is recognised by the Directorate of Technical Education in Maharashtra[3] and the UGC.");
break;
case 2:
printf("Cut-off: \n\tComputer Science 94.4 89 60.8\n I.T 92 87 58\nInstrumentation eng 60 53 43\nE&TC 84 79 57 \nMECHANICAL78 72 52\n");
break;
case 3:
printf("Visiting Companies: \n\tMany companies like Quantifi, LTI, TCS, Infosys, Media.net, Axis Bank, Flexiloans, and CATking, etc., visit the campus to hire students");
break;
case 4:
printf("Fees: \n\t130k PA");
break;
case 5:
printf("Address: \n\tJuhu Versova Link Rd, behind HDFC Bank, Gharkul Society, Bharat Nagar, Versova, Andheri West, Mumbai, Maharashtra 400053");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t7.7/10");
break;
}
break;
case 4:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch(info)
{
case 1:
printf("Description: \n\tVidyalankar Institute of Technology (VIT) is a premier engineering degree college approved by the All India Council For Technical Education (AICTE) and affiliated to University of Mumbai, India.[3] It has been accredited by National assessment and accreditation with A+ grade in 2019.Vidyalankar Institute of Technology was started in the year 1999 after having secured permission from the AICTE and University of Mumbai. It has slowly gained popularity and today attracts top talent.[6] It caters to students who have passed the Maharashtra State Board's HSC and CET examinations and desire to take up engineering as their profession. It secured an A grade rating from the Mumbai University in 2005.[7]");
break;
case 2:
printf("Cut-off: \n\tComputerEng 96.31 94.6 87 \nI.T 94.7 93.4 85 \nElectronics 83.65 79.64 63.23 \nE&TC 89.49 84.64 72.44");
break;
case 3:
printf("Visiting Companies: \n\t•	Bristle ConeWipro Ltd TCS Ltd Nokia MICROLAND 	Tech Mahindra	TCS Ltd ICICI Prudential iGate BM Birla Sun Life Insurance");
break;
case 4:
printf("Fees: \n\t125k PA");
break;
case 5:
printf("Address: \n\tVidyalankar Educational Campus, Vidyalankar College Rd, Wadala East, Deen Bandhu Nagar, Antop Hill, Mumbai, Maharashtra 400037");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t8.4/10");
break;
}
break;
case 5:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch(info)
{
case 1:
printf("Description: \n\tAtharva College of Engineering is a private engineering college that was established in 1999 and situated in Malad, Mumbai. The college is approved by AICTE, accredited by NAAC with a B+ grade. It is affiliated with Mumbai University and recognized by the Government of Maharashtra.Atharva College of Engineering offers only one UG course, B.Tech in 5 specializations. The admission to the course is done on the basis of the entrance exams such as MHT CET or JEE Mains. B.Tech in Computer Engineering is the popular and most opted specialization. The total number of student varies between 800-2100 in various branches");
break;
case 2:
printf("Cut-off: \n\tCs	it	electrical	E&tc 92.61	90.33	73.44	76.38 90.16	86.89	59.38	58.75 81.94	76.10	37.47	30.57");
break;
case 3:
printf("Visiting Companies: \n\tMany reputed companies like Accenture, Infosys, Igate and many others visited our campus and many like TCS, Tech Mahindra invited for pool campus recruitment programs");
break;
case 4:
printf("Fees: \n\t127k PA");
break;
case 5:
printf("Address: \n\tMalad Marve Road, Shri Sevantilal Khandwala Marg, Charkop Naka, Malad West, Mumbai, Maharashtra 400095");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t7.8/10");
break;
}
break;
case 6:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch(info)
{
case 1:
printf("Description: \n\the Vidyavardhini's College of Engineering and Technology(VCET), is an engineering college in Vasai-Virar. The college is affiliated to University of Mumbai and offers Bachelor's degree in Engineering. The college has been graded 'A' by the DTE. The five branches Computer Engineering, Electronics & Telecommunication Engineering, Information Technology Engineering, Instrumentation Engineering, and Mechanical Engineering have been accredited by National Board of Accreditation(NBA) for the period of 3 years w.e.f. April 2012.college has introduced two new branches Artificial intelligence and data science & computer science and Engineering (Data Science) Vidyavardhini College of Engineering and Technology, Vasai is located on the sprawling campus of Vidyavardhini, spread over an area of 12.27 acres. It is a short, two minutes walk from Vasai Road Railway Station");
break;
case 2:
printf("Cut-off: \n\tcs	it	E&tc	Mechanical 93.20	91.23	79.54	72.56 90.66	88.14	71.69	68.13 80.36	78.95	40.68	31.54");
break;
case 3:
printf("Visiting Companies: \n\tThe companies like TCS, Infosys, and much more come to our college and offer placement. \nThe training and placement cell plays a vital role in developing and preparing students for placements");
break;
case 4:
printf("Fees: \n\t122k PA");
break;
case 5:
printf("Address: \n\tK.T. Marg, Vartak College Campus Vasai Road, Vasai-Virar, Maharashtra 401202");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t7.1/10");
break;
}
break;
case 7:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch(info)
{
case 1:
printf("Description: \n\tDwarkadas Jivanlal Sanghvi College of Engineering, also known as D. J. Sanghvi, is an engineering college in Vile Parle, Mumbai. The college was established by Shri Vile Parle Kelavani Mandal in 1994 D. J. Sanghvi College of Engineering was established in 1994. It was named after Dwarkadas J. Sanghvi, an industrialist and pioneer in the pen industry. He manufactured Wilson Fountain Pens. It has been granted autonomous status effective from the academic year 2019-20 The college has an intake of 600 students in eight branches for Bachelor of Engineering. The admissions are done on Merit basis, and there's a separate list for Gujarati linguistics minority, based on a lower merit criteria. The admission are done by DTE( Directorate of Technical Education,Maharashtra),this process is online.");
break;
case 2:
printf("Cut-off: \n\tcs	it	E&tc	chemical	Mechanical 99.30	98.80	97.89	94.35	95.84");
break;
case 3:
printf("Visiting Companies: \n\tTop recruiting companies like Morgan Stanley, JP Morgan, TCS Digital, TCS and Infosys visit the college for placements.\nAs many people from the college prefer to go for MS or MBA, the placement record is quite good.");
break;
case 4:
printf("Fees: \n\t168k PA");
break;
case 5:
printf("Address: \n\t, Bhaktivedanta Swami Rd, opp. Cooper Hospital, Navpada, JVPD Scheme, Vile Parle, Mumbai, Maharashtra 400056");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t8.2/10");
break;
}
break;
case 8:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch(info)
{
case 1:
printf("Description: \n\tDon Bosco Institute of Technology is a private engineering college situated at Kurla, Mumbai affiliated with the University of Mumbai. It has been granted a Religious Minority.In 2005, the college was ranked 84 in the list of top technical colleges in India in a Dataquest-IDC-NASSCOM Survey. The college, under the University of Mumbai, offers bachelor's degrees in engineering in the following programs:[2] 1.	Mechanical engineering - 120 seats 2.	Electronics and telecommunications engineering - 60 seats 3.Computer engineering - 60 seats 4.Information technology - 60 seats The program is divided into 8 semesters spread over 4 years. Granted a religious minority quota, 51% of all seats are reserved for Roman Catholics.");
break;
case 2:
printf("Cut-off: \n\tcs	it	E&tc	Mechanical 94.15	92.52	79.72	48.75");
break;
case 3:
printf("Visiting Companies: \n\tCompanies like L&T, Infosys, Tech Mahindra etc have visited our college nearly this year of 2021 the highest package was 18lpa. Students are eligible for placements mostly after the third year. The total percentage of computer engineering was 100% placement the average package offered to students were 5 LPA which is the non dream and the highest was 18 LPA.");
break;
case 4:
printf("Fees: \n\t119k PA");
break;
case 5:
printf("Address: \n\tPremier Automobiles Road Opp. HDIL Premier Exotica, Kurla, Mumbai, Maharashtra 400070");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t8/10");
break;
}
break;
}//Mumbai colleges switch case ending
break;
case 2: //for Thane city
printf("Please enter your preferred college\n\n");
printf("1.K.C. College of engineering/n2.AP Shah institute of technology\n3.Ideal institute of technology\n4.Shivajirao Jondhale college of engineering\n 5.Alamuri Ratnamala Institute of technology");
scanf("%d",&college);
switch(college)
{
case 1:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\tK.C. College of Engineering (KCCOE[1]) is a private engineering college located in Thane, Mumbai, Maharashtra, India. The college is affiliated to the University of Mumbai and approved by Directorate of Technical Education (DTE), Maharashtra State and All India Council of Technical Education (AICTE), New Delhi.[2] K.C. College of Engineering and Management Studies & Research was established in 2001 by the Excelssior Education Society, offering three branches namely Electronics and Telecommunication Engineering, Computer Engineering, and Information Technology Engineering. ");
break;
case 2:
printf("Cut-off: \n\t	cs	IT	E&tc	84.68	80.63	68.34");
break;
case 3:
printf("Visiting Companies: \n\tTop recruiting companies like Infosys, TCS, IDFC, HCL and Capgemini visit our college for placements.\n•	The training and placement cell works really hard to prepare students for interviews by improving their skill set");
break;
case 4:
printf("Fees: \n\t135k PA");
break;
case 5:
printf("Address: \n\tMithbunder Rd, near Sadguru Gardens, Kopri, Thane East, Thane, Maharashtra 400603");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t8.2/10");
break;
}
break;
case 2:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\t A. P. Shah Institute of Technology[2] is a private engineering college located in Kasarvadavali, in Thane, India. It was established in 2014 and is managed by the Parshvanath Charitable Trust.It is affiliated to the University of Mumbai (a public university, funded by the state government of Maharashtra).[3] The college is approved by the Indian Governments All India Council for Technical Education (AICTE)[4] and is recognized by the Directorate of Technical Education (DTE) of the state Government of Maharashtra.It offers a Bachelor of Engineering (B.E.) degree in Civil engineering, Computer engineering, Computer engineering in data science and AI, Ml respectively, Electronics, and telecommunication engineering, Information Technology, and Mechanical engineering. All of these courses last for 4 years.");
break;
case 2:
printf("Cut-off: \n\tCS - 89.98\nIT - 86.34\nENTC - 72.88\nMech - 52.57\nCivil - 49.52	");
break;
case 3:
printf("Visiting Companies: \n\t");
break;
case 4:
printf("Fees: \n\t115k PA");
break;
case 5:
printf("Address: \n\tSurvey No, 12, Ghodbunder Rd, opp. Hypercity Mall, Bhawani Nagar, Kasarvadavali, Thane West, Thane, Maharashtra 400615");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t8.5/10");
break;
}
break;
case 3:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\t Placements: Engineering, Law, Architecture, Pharmacy, etc. courses are offered. There is no placement in any course. There are no job fairs or internships or anything that prepares you to face recruitment. Teachers are also freshers. You will not get any campus placement offer.\nInfrastructure: Hostel facilities need to improve as it’s a village, students have to face the power cut. Labs are there but are made fully functional when there is inspection from the university. Wi-Fi is there but only for faculty members and office staff. Library is there but I think there should be E-library also.\nFaculty: Teachers are just the same as your age and their education level is Bachelors in respective course. The course doesn't make students ready for the industry. Passing criteria is as per the university but you have to be precise when exam forms are being submitting because it happens commonly that the college fails to submit your exam form");
break;
case 2:
printf("Cut-off: \n\tCS - 79.45\nENTC - 68.32\nMEch - 58.56\nCivil - 48.56");
break;
case 3:
printf("Visiting Companies: \n\tThe Bafana Group | Sudarshan Chemical Industries Ltd. | Piano Presitel | Packam Controls Ind Ltd | Mazagon Dock Ltd. | Indexer Manufacturing Company | GK Constructions | Construction");
break;
case 4:
printf("Fees: \n\t101k PA");
break;
case 5:
printf("Address: \n\thigh school, Shop no.2 matru chaya sadan building Near diva, Sabe Rd, diva east, Thane, Maharashtra 400612");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t1.8/5");
break;
}
break;
case 4:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\tShivajirao S. Jondhale College of Engineering (SSJCOE), is an engineering college located in Dombivli in Thane, Maharastra. SSJCOE is a private engineering college founded in 1994-95. The college has six departments: Computer Engineering, Information technology, Chemical Engineering, Electronics and Telecommunications Engineering, Mechanical Engineering and Artificial Intelligence and Machine Learning.  ");
break;
case 2:
printf("Cut-off: \n\tCS - 78.48\n IT - 76.36\n ENTC -44.35\n Chemical- 53.21\n Mech- 32.54");
break;
case 3:
printf("Visiting Companies: \n\tIn this college,- training and placement mam is also having good contacts in a big company, so it is a better opportunity for all students. ");
break;
case 4:
printf("Fees: \n\t127k PA");
break;
case 5:
printf("Address: \n\t54X5+58M, Sheel-Kalyan Road, Sonarpada, Post, Manpada Rd, behind Venkatesh Petrol Pump, Dombivli East, Thane, Maharashtra 421204");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t3.1/5");
break;
}
break;
case 5:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\t Infrastructure: Wi-Fi is available on the campus. Labs and our college libraries are well-maintained, and classrooms are also well-maintained and clean. The canteen serves good food, and the food is much affordable as compared to outside canines like rice plate with 2 puri starts with only Rs. 30 per plate. There is an ambulance parked for emergency purposes. As the campus is huge, outdoor games are not a problem, and for indoor games, there is a game room.Faculty: Teachers are very good towards students and are very knowledgeable. Our HOD named professor Mayank Mangal helped us when we asked for problems and listened to the demands of students. Every subject teacher is very good and helped us a lot");
break;
case 2:
printf("Cut-off: \n\tCS - 50.65\nIT - 43.45\nAI&ML - 35.56");
break;
case 3:
printf("Visiting Companies: \n\tTop companies like L&T, Lodha Constructions, and Ambuja were the top recruiting companies of our college. ");
break;
case 4:
printf("Fees: \n\t88.5k PA");
break;
case 5:
printf("Address: \n\t: A.S.Rao Nagar, Sapgaon, Shahapur, Maharashtra 421601");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t2.9/5");
break;
}
break;
}

case 3: //For NM

printf("Please enter your preferred college\n\n");
printf("1.F.r.c Rodrigues institute of technolgy\n2.SIES Gradute school of technology\n3.Bharthi vidyapeeth college of engineering\n4.AC Patil college of engineering\n5.Pillai College of engineering\n6.Terna Engineering college\n7.Indira Gandhi college of engineering\n8.Lokmanya Tilak college of engineering\n");
scanf("%d",&college);
switch(college)
{
case 1:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\t FCRIT is a private, un-aided, minority, non-autonomous institute affiliated to the University of Mumbai. It offers a four-year baccalaureate course culminating in the B.E. degree conferred by the university. The institute has been graded A by the Directorate of Technical Education, Government of Maharashtra State.[2] It is recognised by the AICTE and has received accreditation from the National Board of Accreditation(NBA), New Delhi.FCRIT was established in 1994 as a part of the Agnel Technical Education Complex at Vashi, which itself was established in 1984.[4] The institute is named after late Rev. Fr. Conceicao Rodrigues, who died in odour of sanctity.");
break;
case 2:
printf("Cut-off: \n\tCS - 96.66\n IT - 96.12\n Electrical - 90.50\nENTC - 92.10\n Mech - 90.6");
break;
case 3:
printf("Visiting Companies: \n\t•	Big companies like ThyssenKrupp, Larsen & Toubro, Siemens, Petrofac, TCS, Jacobs, etc., visit the college for the placements.\nIf you are eligible then it's sure that you'll get a job, Because college tries their level best for students to get a job. ");
break;
case 4:
printf("Fees: \n\t140k PA");
break;
case 5:
printf("Address: \n\tFather Agnel Technical Education Complex, near Noor Masjid, Juhu Nagar, Sector 9A, Vashi, Navi Mumbai, Maharashtra 400703");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t7.7/10");
break;
}
break;
case 2:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\t SIES Graduate School of Technology (SIES GST)[2] is an engineering college, an integral part of SIES, and was started in the year 2002. It is one of the Institutes in Navi Mumbai imparting Engineering Technical Education. The institute is approved by the AICTE[3] New Delhi, DTE Mumbai[4] and affiliated to the University of Mumbai.[5] SIES GST is one of the premier engineering institutes in Mumbai area under the ambit of University of Mumbai.SIES GST is located in the campus called Sri Chandrasekarendra Saraswati Vidyapuram. The college shares its campus with institutions of the SIES group. Campus is spread across 6.5 acres of land in Navi Mumbai and is located at one of the premier suburbs of Nerul. A Language Laboratory with audio-visual equipment aids in modern structured teaching. SIES GST is equipped with 45 laboratories, Workshops, Computer Center, Language Lab and dedicated Project Labs. The institute has two auditoriums. With a combined capacity of over 200 students,");
break;
case 2:
printf("Cut-off: \n\tCS - 94.30\nIT - 92.81\n ENTC - 82.61\n Mech - 84.22");
break;
case 3:
printf("Visiting Companies: \n\t•	The companies that are bulk recruiters: TCS, L&T, Zycus, GEP, Cactus, Reliance, Capgemini, Endurance, Tech Mahindra, IBM, Dabur, Himalaya, Capgemini, Alepo, Infosys and Wipro. The placement cell is really good, and they share on-campus and off-campus opportunities on a regular basis. ");
break;
case 4:
printf("Fees: \n\t117k PA");
break;
case 5:
printf("Address: \n\tSri Chandrasekarendra Saraswati Vidyapuram Sector-V, Nerul, Navi Mumbai, Maharashtra 400706");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t7.9/10");
break;
}
break;
case 3:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\t Bharati Vidyapeeth is a 58 year old private deemed to be university established in Pune, India. It was established in 1964 by Indian politician and educationist Patangrao Kadam. Bharati Vidyapeeth has campuses across the country at New Delhi, Navi Mumbai, Sangli, Pune, Solapur, Kolhapur, Karad, Satara, and Panchgani. Among these are colleges of Medicine, Dentistry, Ayurveda, Homeopathy, Nursing, Pharmacy, Engineering, Management, Hotel Management, Catering Technology, Environment Science and Agriculture etc. On 26 April 1996 the Government of India, on the recommendation of the University Grants Commission, granted the status of Deemed to be University to a cluster of 12 institutions of Bharati Vidyapeeth The National Institutional Ranking Framework (NIRF) ranked Bharati Vidyapeeth 98 overall in India for 2020[1] and 68 among universities for 2021.[2] The universities constituent engineering college, Bharati Vidyapeeth Deemed University College of Engineering, Pune was ranked 96 in India by the NIRF engineering ranking for 2021.Bharati Vidyapeeth's College of Pharmacy was ranked 17 in India by the National Institutional Ranking Framework (NIRF) pharmacy ranking in 2021");
break;
case 2:
printf("Cut-off: \n\tCS - 92.55\nIT - 90.62\n ENTC - 73.64\n Chemical - 85.62");
break;
case 3:
printf("Visiting Companies: \n\t Top recruiting companies of our college are Technip engineering, L&T, Jacobs Engineering, ONGC, SE, Deepak Fertilizer and Thyaro Care.Roles offered to the students are production engineer, sales engineer, maintenance engineer, design engineer, site engineer, etc");
break;
case 4:
printf("Fees: \n\t107k PA");
break;
case 5:
printf("Address: \n\tSector 7, CBD Belapur, Navi Mumbai, Maharashtra 400614");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t7.1/10");
break;
}
break;
case 4:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\tFounded in 1992, AC Patil College of Engineering (ACPCE) is a privately-funded institution of engineering located at Kharghar in Navi Mumbai. Affiliated with the University of Mumbai, the college offers undergraduate, postgraduate and PhD programmes in engineering, computer application and management studies approved by All India Council for Technical Education (AICTE). Besides this, the college provides three diploma courses in electronics and telecommunication, electrical and computer engineering. All the engineering programmes are certified by the Directorate of Technical Education  ");
break;
case 2:
printf("Cut-off: \n\tIT - 87.27\nElectrical - 35.54\nENTC - 65.57\nMech - 24.32");
break;
case 3:
printf("Visiting Companies: \n\tOver 75 students are placed successfully among which the majority were placed before the final exams. The institute arranges for its students to visit reputed industries like MTNL, VSNL, and Siemens among many other well-known names. Apart from the industrial visits, the students carry out projects for reputed organisations like BARC, TIFR, NOCIL, RCF, Reliance, etc. Their vast repertoire of co-curricular activities, ranging from sports to music and extremely popular Intercollegiate Technical Festival 'VECTORS' bring out the lesser-known talents in our students, so that they mature into well-rounded personalities besides excelling in academics.");
break;
case 4:
printf("Fees: \n\t296k-446k For four years");
break;
case 5:
printf("Address: \n\tSector 4, Kharghar, Navi Mumbai, Maharashtra 410210");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t3.1/5");
break;
}
break;
case 5:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\tPillai College of Engineering (Autonomous) is an engineering college in New Panvel, Navi Mumbai, Maharashtra, India was established in 1999 (commencement of courses from A.Y. 2000–2001) as a self financed Malayalam Linguistic Minority autonomous Institute affiliated to University of Mumbai, approved by AICTE and Recognized by Govt. of Maharashtra.[1] The college is recognized by UGC under section 12(b) and 2(f).[2] It is operating under the banner of Mahatma Education Society (MES).[3] It is commonly referred to as Pillai College, PCE also as PIIT, also as PIITE.It is the first autonomous Engineering College in Navi Mumbai, it was granted autonomous status by the UGC in 2021-22.[4] It is affiliated to the University of Mumbai. Pillai College of Engineering was started as Pillai Institute of Information Technology, Engineering, Media Studies and Research, and popularly known as PIIT in the year 2000. The name of the institute was changed as Pillai College of Engineering in the year 2016 and is recognized by the AICTE, Government of India. Pillai College of Engineering is accredited A+ grade by National Assessment and Accreditation Council.[5] ");
break;
case 2:
printf("Cut-off: \n\tCS - 91.44\nIT - 87.88\n ENTC - 74.34\n Mech - 70.27");
break;
case 3:
printf("Visiting Companies: \n\t•	L&T, TCS, Jaro, Wipro, Capgemini, Birlasoft, Coditas, Jio, etc., are the top recruiting companies. In short, if the student is capable, the college provides every opportunity so that the student gets placed. ");
break;
case 4:
printf("Fees: \n\t125k PA");
break;
case 5:
printf("Address: \n\tNew Panvel, Navi Mumbai");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t8.2/10");
break;
}
break;
case 6:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\tTerna Engineering College is a private college of engineering in Nerul, Navi Mumbai, Maharashtra, India, affiliated to the University of Mumbai. It was established in 1991 and received approval from the All India Council for Technical Education in 1994.[1] It offers bachelor's and master's degrees in various engineering subjectsTerna Engineering College (TEC) Navi Mumbai has signed MoUs with over 20 organisations for training and placement opportunities. The College has tie-ups with some of the top companies, including TCS, Infosys, Accenture, Godrej and Deloitte. TEC Navi Mumbai has provided internship opportunities to more than 800 students over a period of three years. ");
break;
case 2:
printf("Cut-off: \n\tCS - 90.67\n IT - 88.52\n AI&DS - 86.65\nENTC - 70.92\n Mechatronics - 75.69");
break;
case 3:
printf("Visiting Companies: \n\t•	The top recruiting companies like TCS, INFOSYS, WIPRO, L and T Infotech, Capgemini, Siemens etc, usually came for placement. The placement department takes a lot of efforts for our new engineers to get them placed in the best companies that come to the college. ");
break;
case 4:
printf("Fees: \n\t126k PA");
break;
case 5:
printf("Address: \n\tPlot No 12, Sector-22 Opp. Nerul Railway Station W, Phase II, Nerul, Navi Mumbai, 400706");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t3.8/5");
break;
}
case 7:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\tPlacements: Hear are only 30% to 40 % chances of placement. But comparing other colleges SIGCE doing good job about placement. Current college organized internship for 3nd and 4th year students which is good for placement. And thay also provide us good package.Infrastructure: The college campus was big but hear is no developed. And College provide Wi-Fi for students as well and here is a canteen also which is providing healthy food. College also arranged sports competition and all programs. College also provide a stationary materials.Faculty: The teachers of smt Indira Gandhi College of engineering are very helpful. In current covid19 thay are doing great job to teaching us. And hear is lot of club which help to increase your technical as well as non technical knowledge. And all club handal by students and teachers guide to developed something innovative. ");
break;
case 2:
printf("Cut-off: \n\tCS - 87.74\n Electronics 41.87\n Mechanical - 36.65");
break;
case 3:
printf("Visiting Companies: \n\tMany companies have been visiting to this college for placements and provide good packages to the students");
break;
case 4:
printf("Fees: \n\t90k PA");
break;
case 5:
printf("Address: \n\tSector 8, Plot 1, Ghansoli, Navi Mumbai, Maharashtra 400701");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t6.2/10");
break;
}
break;
case 8:
printf("What information are you trying to gather:\n\n");
printf("1)Description\n2)Cut-off\n3)Visiting Companies\n4)Address\n5)Rating\n");
scanf("%d",&info);
switch (info)
{
case 1:
printf("Description: \n\tLokmanya Tilak College of Engineering, established in 1994 is an engineering college in Navi Mumbai. The college is affiliated with the University of Mumbai and the official engineering degrees are issued by the same. The college is approved by AICTE, New Delhi and is recognized by the government of Maharashtra. Recognition of some of their engineering programs (Mechanical Engineering and Electronics & Telecommunication Engineering) are accredited by National Board of Accreditation (NBA), India, a full member of the Washington Accord under Engineering Tier II (Under Graduate) Institutions category. The National Assessment and Accreditation Council(NAAC), one of the prime responsible bodies for accreditation of higher education institutions in India, has accredited the college with a B++ grade for the current fiscal year. ");
break;
case 2:
printf("Cut-off: \n\tCS - 86.83\n AI&ML - 79.65\n AI&DS - 77.62\n CS(CyberSecurity) - 74.25");
break;
case 3:
printf("Visiting Companies: \n\t•	Companies like Jio, Tata, Infosys, Minecraft, L&T, Torrent, Wipro, etc., visit our college for placements, and they offer excellent packages. There is a lot of help done by the placement cell to get an internship in the industry for students.");
break;
case 4:
printf("Fees: \n\t125k PA");
break;
case 5:
printf("Address: \n\tVikas Nagar, Gyan Vikas Road, Sector 4, Kopar Khairane, Navi Mumbai, Maharashtra 400709");
break;
case 6:
printf("Extra curricular activities: \n\tYes");
break;
case 7:
printf("Rating: \n\t6.8/10");
break;
}
break;
}


break;
}//switch city case close
getch();
return 0;
}
