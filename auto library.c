#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int same();
int main()
{
    //Book_num: number of Book
    //Book_sel: Selected Book(Horror)
    //creating structure for storing the books
    struct books{
    char name[25]; char author[20];char s[20]; int shelf_no;
} ;

struct books  a={"THE DAY","ROBINSON","Shelf NO. :-",6};
struct books  b={"THE adventure","JOHN DAVID","Shelf NO. :-",5};
struct books c={"THE Romantic","JAMES","Shelf NO. :-",4};
struct books d={" The commedi","JK THOMAS","Shelf NO. :-",3};
struct books  e={"RD SHRMA","Chhya prakasni","Shelf NO. :-",2};
struct books f={"Mechanics vol 1&2","Hc verma","Shelf NO. :-",1};
struct books g={"C programming ","kanetkar","Shelf NO. :-",8};


    int n,Roll,Book_num,Book_sel,day,dept;
    int copy;
    copy==5;

    char Book[20];
    //STDENT IDENTIFICATION DONE HERE//
    //STUDENT DEPARTMENT CJHOOSING//
    printf("\n\nChoose your Department\n");
    printf("\n\t1.CSE\n\t2.ECE\n\t3.IT\n\t4.AIEE\n\t5.MECHANICAL\n\t6.CSEDS\n\t7.Electrical\n\n");
    printf("\nEnter Choosing Number: \t");
    scanf("%d",&dept);



        if(dept==1){
    printf("\nYou are from CSE\n");
    }

        else if(dept==2) {
     printf("\nYou are from ECE\n");
     }
        else if(dept==3){
      printf("\nYou are from IT\n");
      }
        else if(dept==4){

       printf("\nYou are from AIEE\n");
       }
        else if(dept==5){
       printf("\nYou are from MECHANICAL\n");
       }
        else if(dept==6){
         printf("\nYou are from CSEDS\n");
        }

        else if(dept==7){
        printf("\nYou are from ELECTRICAL\n");
        }
        else if(dept>7){
                printf("Error occured!!\n");
   exit(0);
        }





//STUDENT CLASS ROLL NO ENTERING//
if(dept<=7)
    {

        printf("\n\nEnter{XXX}Your Class Roll Number:(22/dept/XXX)\n\n ");

        scanf("%d",&Roll);
        if(dept==1){
        printf("\nYour roll no is:-\t22 CSE %d\n",Roll);
        }
        else if(dept==2){
        printf("\nYour roll no is:-\t22 ECE %d\n",Roll);
        }
        else if(dept==3){
        printf("\nYour roll no is:-\t22 IT %d\n",Roll);
        }
        else if(dept==4){
        printf("\nYour roll no is:-\t22 AIEE %d\n",Roll);
        }
        else if(dept==5){
        printf("\nYour roll no is:-\t22 MECHANICAL %d\n",Roll);
        }
        else if(dept==6){
        printf("\nYour roll no is:-\t22 CSEDS %d\n",Roll);
        }
        else if(dept==7){
        printf("\nYour roll no is:-\t22 ELECTRICAL %d\n",Roll);
        }
        else
        {
            printf("Error ocuured for choosing wrong input. For this roll no can't generated!!!\n");
        }
    }
	printf("\n\nThis is our new library.\nAll copies are available\n");

    //day Types CHOOSING:

    for(day=1;day<=3;day++)
    {


        printf("\n\nEnter your Day number:(1,2,3...):\t");
        scanf("%d",&day);


        //different types of Books:


        printf("\nEnter {number} What types of Book You want:(1/2/3/4....) \n\n");
        printf("\n1.Horror\n");
        printf("\n2.Adventure\n");

        printf("\n3.Romantical\n");
        printf("\n4.Comedy\n");

        printf("\n5.Physics\n");
        printf("\n6.Mathematics\n");

        printf("\n7.Computer\n\n\n");

        scanf("%d",&Book_num);





     //CATEGORY WISE AVAILABLE BOOKS SHOWN HERE//

        if(Book_num ==1)
        {
            printf("Available Horror Books in our library are:\n\n");
            printf("1.BOOK: House of Leaves \t\t\tAUTHOR: Mark Z. Danielewski, 2000\n\n");
            printf("2.BOOK: The Haunting of Hill House\t AUTHOR: Shirley Jackson, 1959\n\n");
            printf("3.BOOK: The Shining\t\t\t AUTHOR: Stephen King, 1977\n\n");
            printf("4.BOOK: Dracula\t\t\t\t AUTHOR: Bram Stoker, 1897\n\n");
            printf("5.BOOK: It\t\t\t\t AUTHOR: Stephen King, 1986\n\n");

            scanf("%d",&Book_sel);
            //CHOOSING OF AVAILABLE BOOKS SHOWN HERE//
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected 'House Of Leaves' Book \n Author:'Mark Z. Danielewski',2000");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected ' The Haunting of Hill House' Book \n Author:'Shirley Jackson',1959");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'The Shining' Book \n Author:' Stephen King',1977");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Dracula' Book \n Author:' Robert Louis Stevenson',1897");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'King Solomon's Mines' Book \n Author:'Stephen King',1986");
            }

        }
        if(Book_num ==2)
        {
            printf("Available Adventurous Books in our library are:\n\n");
            printf("1.BOOK: The Odyssey \t\t\tAUTHOR:Homer\n\n");
            printf("2.BOOK: Gulliver's Travels \t AUTHOR: Jonathan Swift\n\n");
            printf("3.BOOK: Moby-Dick\t\t\t AUTHOR:  Herman Melville\n\n");
            printf("4.BOOK:  Treasure Island\t\t\t\t AUTHOR:  Robert Louis Stevenson\n\n");
            printf("5.BOOK: King Solomon's Mines\t\t\t\t AUTHOR:  H. Rider Haggard\n\n");

            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected 'The Odyssey' Book \n Author:'Homer'.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected 'Gulliver's Travels' Book \n Author:'Jonathan Swift'.");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Moby-Dick' Book \n Author:'Herman Melville'.");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected ' Treasure Island' Book \n Author:'Bram Stoker'.");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'King Solomon's Mines' Book \n Author:' H. Rider Haggard'.");
            }




        }
        if(Book_num ==3)
        {
            printf("Available Romantical Books in our library are:\n\n");
            printf("1.BOOK: Pride and Prejudice \t\t\tAUTHOR: Jane Austen,.\n\n");
            printf("2.BOOK: Wuthering Heights \t AUTHOR: Shirley Jackson,.\n\n");
            printf("3.BOOK: Jane Eyre\t\t\t AUTHOR: Stephen King,.\n\n");
            printf("4.BOOK:  Gone With the Wind\t\t\t\t AUTHOR: Margaret Mitchell.\n\n");
            printf("5.BOOK: Love Story\t\t\t\t AUTHOR: Erich Segal,.\n\n");

            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected Pride and Prejudices' Book \n Author:'Jane Austen'.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected ' Wuthering Heights' Book \n Author:'Shirley Jackson'.");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Jane Eyre' Book \n Author:' Stephen King'.");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected ' Gone With the Wind' Book \n Author:'Margaret Mitchell'.");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Love Story' Book \n Author:'Erich Segal'.");
            }


        }
        if(Book_num ==4)
        {
            printf("Available Comedy Books in our library are:\n\n");
            printf("1.BOOK: American Cheese: An Indulgent Odyssey Through the Artisan Cheese World\t\t\tAUTHOR: Jane Austen,.\n\n");
            printf("2.BOOK: I Want to Be Where the Normal People Are \t AUTHOR: Shirley Jackson,.\n\n");
            printf("3.BOOK: Jane Eyre\t\t\t AUTHOR: Rachel Bloom.\n\n");
            printf("4.BOOK: Born a Crime\t\t\t\t AUTHOR: Margaret Mitchell.\n\n");
            printf("5.BOOK: Me Talk Pretty One Day\t\t\t\t AUTHOR: Erich Segal,.\n\n");

            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("You have Selected 'American Cheese: An Indulgent Odyssey Through the Artisan Cheese World' Book \n Author:'Jane Austen'.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected 'I Want to Be Where the Normal People Are' Book \n Author:'Shirley Jackson'.");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Jane Eyre' Book \n Author:'Rachel Bloom'.");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Born a Crime ' Book \n Author:'Margaret Mitchell'.");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Me Talk Pretty One Day' Book \n Author:'Erich Segal'.");
            }

        }
        if(Book_num ==5)
        {
            printf("Available Physics Books in our library are:\n\n");
            printf("1.BOOK: The Feynman Lectures on Physics. The Millenium Edition, Vol\n\n");
            printf("2.BOOK:Brief History of Time. From the Big Bang to Black Holes. ...\n\n");
            printf("3.BOOK:University Physics with Modern Physics. Hugh D. ...\n\n");
            printf("4.BOOK:Fundamentals of Physics. ...\n\n");
            printf("5.BOOK:Basic Physics. ...\n\n");



            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected 'The Feynman Lectures on Physics. The Millenium Edition, Vol'book.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou have Selected 'Brief History of Time. From the Big Bang to Black Holes.'book. ...");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'University Physics with Modern Physics. Hugh D. 'book....");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Fundamentals of Physics. 'book....");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Basic Physics.'book. ...");
            }



        }
        if(Book_num ==6)
        {
            printf("Available Mathematical Books in our library are:\n\n");
            printf("1.BOOK: MATHEMATICS EXEMPLAR CLASS X. ...\n\n");
            printf("2.Book: Basic Mathematics For Makaut Student\n\n");
            printf("3.BOOK: Handbook of Mathematics (Set of 3 Books) ...\n\n");
            printf("4.BOOK. Test Of Mathematics At The 10+2 Level 18 Th Edition. ...\n\n");
            printf("5.BOOK: Vedic Mathematics Made Easy, 2nd Edition. ...\n\n");


            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected 'MATHEMATICS EXEMPLAR CLASS X. ...' Book \n.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected 'Basic Mathematics For Makaut Student' Book \n .");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Handbook of Mathematics (Set of 3 Books) ...' Book \n .");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Test Of Mathematics At The 10+2 Level 18 Th Edition. ..' Book \n .");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Vedic Mathematics Made Easy, 2nd Edition. ...' Book \n .");
            }

        }
        if(Book_num ==7)
        {
            printf("Available Computer Books in our library are:\n\n");
            printf("1.Bjarne Stroustrup - The C++ Programming Language.\n\n");

            printf("2.Donald Knuth - The Art of Computer Programming.\n\n");
            printf("3.Ellen Ullman - Close to the Machine.\n\n");
            printf("4.Ellis Horowitz - Fundamentals of Computer Algorithms.\n\n");
            printf("5.Eric Raymond - The Art of Unix Programming.\n\n");


            scanf("%d",&Book_sel);
            if(Book_sel==7)
            {
                printf("\n\nYou have Selected 'James Gosling - The Java Programming Language' Book \n.");
            }
            else if(Book_sel==1)
            {
                printf("\n\nYou  have Selected '.Bjarne Stroustrup - The C++ Programming Language.'Basic Mathematics For Makaut Student' Book \n .");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou have Selected 'Donald Knuth - The Art of Computer Programming.' Book \n .");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Ellen Ullman - Close to the Machine.' Book \n .");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Ellis Horowitz - Fundamentals of Computer Algorithms' Book \n .");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Eric Raymond - The Art of Unix Programming. - Fundamentals of Computer Algorithms' Book \n .");
            }
        }
    }







    
    



    
	for(day=4;day<=30;day++)
    {


        printf("\n\nEnter your Day number:(4,5,6....):\t");
        scanf("%d",&day);


        //different types of Books:


        printf("\nEnter {number} What types of Book You want:(1/2/3/4....) \n\n");
        printf("\n1.Horror\n");
        printf("\n2.Adventure\n");

        printf("\n3.Romantical\n");
        printf("\n4.Comedy\n");

        printf("\n5.Physics\n");
        printf("\n6.Mathematics\n");

        printf("\n7.Computer\n\n\n");

        scanf("%d",&Book_num);





     //CATEGORY WISE AVAILABLE BOOKS SHOWN HERE//

        if(Book_num ==1)
        {
            printf("Available Horror Books in our library are:\n\n");
            printf("1.BOOK: House of Leaves \t\t\tAUTHOR: Mark Z. Danielewski, 2000\n\n");
            printf("2.BOOK: The Haunting of Hill House\t AUTHOR: Shirley Jackson, 1959\n\n");
            printf("3.BOOK: The Shining\t\t\t AUTHOR: Stephen King, 1977\n\n");
            printf("4.BOOK: Dracula\t\t\t\t AUTHOR: Bram Stoker, 1897\n\n");
            printf("5.BOOK: It\t\t\t\t AUTHOR: Stephen King, 1986\n\n");

            scanf("%d",&Book_sel);
            //CHOOSING OF AVAILABLE BOOKS SHOWN HERE//
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected 'House Of Leaves' Book \n Author:'Mark Z. Danielewski',2000");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected ' The Haunting of Hill House' Book \n Author:'Shirley Jackson',1959");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'The Shining' Book \n Author:' Stephen King',1977");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Dracula' Book \n Author:' Robert Louis Stevenson',1897");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'King Solomon's Mines' Book \n Author:'Stephen King',1986");
            }

        }
        if(Book_num ==2)
        {
            printf("Available Adventurous Books in our library are:\n\n");
            printf("1.BOOK: The Odyssey \t\t\tAUTHOR:Homer\n\n");
            printf("2.BOOK: Gulliver's Travels \t AUTHOR: Jonathan Swift\n\n");
            printf("3.BOOK: Moby-Dick\t\t\t AUTHOR:  Herman Melville\n\n");
            printf("4.BOOK:  Treasure Island\t\t\t\t AUTHOR:  Robert Louis Stevenson\n\n");
            printf("5.BOOK: King Solomon's Mines\t\t\t\t AUTHOR:  H. Rider Haggard\n\n");

            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected 'The Odyssey' Book \n Author:'Homer'.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected 'Gulliver's Travels' Book \n Author:'Jonathan Swift'.");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Moby-Dick' Book \n Author:'Herman Melville'.");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected ' Treasure Island' Book \n Author:'Bram Stoker'.");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'King Solomon's Mines' Book \n Author:' H. Rider Haggard'.");
            }




        }
        if(Book_num ==3)
        {
            printf("Available Romantical Books in our library are:\n\n");
            printf("1.BOOK: Pride and Prejudice \t\t\tAUTHOR: Jane Austen,.\n\n");
            printf("2.BOOK: Wuthering Heights \t AUTHOR: Shirley Jackson,.\n\n");
            printf("3.BOOK: Jane Eyre\t\t\t AUTHOR: Stephen King,.\n\n");
            printf("4.BOOK:  Gone With the Wind\t\t\t\t AUTHOR: Margaret Mitchell.\n\n");
            printf("5.BOOK: Love Story\t\t\t\t AUTHOR: Erich Segal,.\n\n");

            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected Pride and Prejudices' Book \n Author:'Jane Austen'.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected ' Wuthering Heights' Book \n Author:'Shirley Jackson'.");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Jane Eyre' Book \n Author:' Stephen King'.");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected ' Gone With the Wind' Book \n Author:'Margaret Mitchell'.");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Love Story' Book \n Author:'Erich Segal'.");
            }


        }
        if(Book_num ==4)
        {
            printf("Available Comedy Books in our library are:\n\n");
            printf("1.BOOK: American Cheese: An Indulgent Odyssey Through the Artisan Cheese World\t\t\tAUTHOR: Jane Austen,.\n\n");
            printf("2.BOOK: I Want to Be Where the Normal People Are \t AUTHOR: Shirley Jackson,.\n\n");
            printf("3.BOOK: Jane Eyre\t\t\t AUTHOR: Rachel Bloom.\n\n");
            printf("4.BOOK: Born a Crime\t\t\t\t AUTHOR: Margaret Mitchell.\n\n");
            printf("5.BOOK: Me Talk Pretty One Day\t\t\t\t AUTHOR: Erich Segal,.\n\n");

            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("You have Selected 'American Cheese: An Indulgent Odyssey Through the Artisan Cheese World' Book \n Author:'Jane Austen'.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected 'I Want to Be Where the Normal People Are' Book \n Author:'Shirley Jackson'.");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Jane Eyre' Book \n Author:'Rachel Bloom'.");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Born a Crime ' Book \n Author:'Margaret Mitchell'.");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Me Talk Pretty One Day' Book \n Author:'Erich Segal'.");
            }

        }
        if(Book_num ==5)
        {
            printf("Available Physics Books in our library are:\n\n");
            printf("1.BOOK: The Feynman Lectures on Physics. The Millenium Edition, Vol\n\n");
            printf("2.BOOK:Brief History of Time. From the Big Bang to Black Holes. ...\n\n");
            printf("3.BOOK:University Physics with Modern Physics. Hugh D. ...\n\n");
            printf("4.BOOK:Fundamentals of Physics. ...\n\n");
            printf("5.BOOK:Basic Physics. ...\n\n");



            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected 'The Feynman Lectures on Physics. The Millenium Edition, Vol'book.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou have Selected 'Brief History of Time. From the Big Bang to Black Holes.'book. ...");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'University Physics with Modern Physics. Hugh D. 'book....");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Fundamentals of Physics. 'book....");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Basic Physics.'book. ...");
            }



        }
        if(Book_num ==6)
        {
            printf("Available Mathematical Books in our library are:\n\n");
            printf("1.BOOK: MATHEMATICS EXEMPLAR CLASS X. ...\n\n");
            printf("2.Book: Basic Mathematics For Makaut Student\n\n");
            printf("3.BOOK: Handbook of Mathematics (Set of 3 Books) ...\n\n");
            printf("4.BOOK. Test Of Mathematics At The 10+2 Level 18 Th Edition. ...\n\n");
            printf("5.BOOK: Vedic Mathematics Made Easy, 2nd Edition. ...\n\n");


            scanf("%d",&Book_sel);
            if(Book_sel==1)
            {
                printf("\n\nYou have Selected 'MATHEMATICS EXEMPLAR CLASS X. ...' Book \n.");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou  have Selected 'Basic Mathematics For Makaut Student' Book \n .");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Handbook of Mathematics (Set of 3 Books) ...' Book \n .");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Test Of Mathematics At The 10+2 Level 18 Th Edition. ..' Book \n .");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Vedic Mathematics Made Easy, 2nd Edition. ...' Book \n .");
            }

        }
        if(Book_num ==7)
        {
            printf("Available Computer Books in our library are:\n\n");
            printf("1.Bjarne Stroustrup - The C++ Programming Language.\n\n");

            printf("2.Donald Knuth - The Art of Computer Programming.\n\n");
            printf("3.Ellen Ullman - Close to the Machine.\n\n");
            printf("4.Ellis Horowitz - Fundamentals of Computer Algorithms.\n\n");
            printf("5.Eric Raymond - The Art of Unix Programming.\n\n");


            scanf("%d",&Book_sel);
            if(Book_sel==7)
            {
                printf("\n\nYou have Selected 'James Gosling - The Java Programming Language' Book \n.");
            }
            else if(Book_sel==1)
            {
                printf("\n\nYou  have Selected '.Bjarne Stroustrup - The C++ Programming Language.'Basic Mathematics For Makaut Student' Book \n .");
            }
            else if(Book_sel==2)
            {
                printf("\n\nYou have Selected 'Donald Knuth - The Art of Computer Programming.' Book \n .");
            }
            else if(Book_sel==3)
            {
                printf("\n\nYou have Selected 'Ellen Ullman - Close to the Machine.' Book \n .");
            }
            else if(Book_sel==4)
            {
                printf("\n\nYou have Selected 'Ellis Horowitz - Fundamentals of Computer Algorithms' Book \n .");
            }
            else if(Book_sel==5)
            {
                printf("\n\nYou have Selected 'Eric Raymond - The Art of Unix Programming. - Fundamentals of Computer Algorithms' Book \n .");
            }
        }
    







    
    if(day>=3)
    {
    	int y;
        printf("\n\nAre you Interested to see your Suggested favourite Books:\n\n\n");
        printf("1.Yes\n\n2.No\n\n3.Exit\n\n");
        scanf("%d",&y);
        
        {
            if(y==1)
            {


               if(day==1&&day==2&&Book_num==1||2||3||4||5||6||7)
               {
                    printf("Your interest is:-  %d\n",Book_num);
               }


                else if(day==2&&day==3&&Book_num==1||2||3||4||5||6||7){
                    printf("\nit seems that Your interest is:-  %d\n",Book_num);

                }
                else if(day==3&&1&&Book_num==1||2||3||4||5||6||7){
                    printf("\n it seems that Your interest is:-  %d\n",Book_num);

                }

                if(Book_num==1){
                    printf("\n\nWe are suggesting the horror books:-\n");
                    printf("%s\n%s\n%s%d",a.name,a.author,a.s,a.shelf_no);
                }
                else if(Book_num==2){
                    printf("\n\nWe are suggesting the adventures  books:-\n");
                    printf("%s\n%s\n%s%d",b.name,b.author,b.s,b.shelf_no);
                }
                else if(Book_num==3){
                    printf("\n\nWe are suggesting the   romantical books:-\n");
                    printf("%s\n%s\n%s%d",c.name,c.author,c.s,c.shelf_no);
                }
                else if(Book_num==4){
                    printf("\n\nWe are suggesting the comedy  books:-\n");
                    printf("%s\n%s\n%s%d",d.name,d.author,d.s,d.shelf_no);
                }
                else if(Book_num==5){
                    printf("\n\nWe are suggesting the  pHYSICS books:-\n");
                    printf("%s\n%s\n%s%d",e.name,e.author,e.s,e.shelf_no);
                }
                else if(Book_num==6){
                    printf("\n\nWe are suggesting the mathematics  books:-\n");
                    printf("%s\n%s\n%s%d",f.name,f.author,f.s,f.shelf_no);
                }
                else if(Book_num==7){
                    printf("\n\nWe are suggesting the  computer books:-\n");
                    printf("%s\n%s\n%s%d",g.name,g.author,g.s,g.shelf_no);
                }
                printf("\n\n----------------The process end----------------.\n\n\t\t\2\2Thank you!!!\t\t\t\n\n");

            }
            else if(y==2)
            {
                printf("\n\n\n\n\t--------------THANK YOU-----------------\t\n\n");
                printf("\t-----------Have A Nice Day--------------\t\n\n");
            }
            else
            {
                exit(0);
            }
        }

	}
    


	}
return 0;
}
