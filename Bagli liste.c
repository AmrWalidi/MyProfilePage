#include <stdio.h>
struct Node {
	int Data;
	struct Node *sonraki;
};

struct Node *ilk=NULL;

void sonaEkle(int a){
	
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->Data=a;
	yeni->sonraki=NULL;
	if(ilk==NULL){
		ilk=yeni; 
	}
	
	else{
	struct Node *gecici=ilk;
    while(gecici->sonraki!=NULL){
    	gecici=gecici->sonraki;
	}
	gecici->sonraki=yeni;
  }   
}

void basaEkle(int a){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->Data=a;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni; 
	}
	
   else{
   	yeni->sonraki=ilk;
   	ilk=yeni;
   }
}

void arayaEkle(int a,int b){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
	yeni->Data=a;
	yeni->sonraki=NULL;
	
	if(ilk==NULL){
		ilk=yeni; 
	}
	
	else{
		struct Node *gecici=ilk;
		while(gecici->sonraki!=NULL){
			if(gecici->Data==b){
				yeni->sonraki=gecici->sonraki;
				gecici->sonraki=yeni;
				break;
			}
			gecici=gecici->sonraki;
		}
	}
}

void Listele(){
	struct Node *gecici=ilk;
    while(gecici!=NULL){
    	printf("%d ",gecici->Data);
    	gecici=gecici->sonraki;
	}
	printf("\n");
}


main(){
	
	sonaEkle(8);
	sonaEkle(7);
	basaEkle(9);
	Listele();
	arayaEkle(6,9);
	Listele();
	basaEkle(0);
	Listele();
// Manuel olarak:-	
	
//	struct Node *n1=(struct Node*)malloc(sizeof(struct Node));
//	n1->Data=4;
//	n1->sonraki=NULL;

//	struct Node *n2=(struct Node*)malloc(sizeof(struct Node));
//	n2->Data=7;
//	n2->sonraki=NULL;

//	struct Node *n3=(struct Node*)malloc(sizeof(struct Node));
//	n3->Data=9;
//	n3->sonraki=NULL;

//	n1->sonraki=n2;
//	n2->sonraki=n3;   
}
