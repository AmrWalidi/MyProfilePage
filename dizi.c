#include <stdio.h>
#include <math.h>
main(){
	
	int islem, lenMax, num1, num2, toplam=0, cikarma ,carpim ,x=0 ,k=0, i,r, j, y=0, elde=0, gecici=0;
	int lenSayi1,lenSayi2,carpma[30][30], sonuc[10];
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&lenSayi1);
	printf("Dizinin boyutunu giriniz: ");
	scanf("%d",&lenSayi2);
	char sayi1[lenSayi1], sayi2[lenSayi2];
			
	
	printf("Islem yapmak icin sec:\n1.Toplam\n2.Cikarma\n3.Carpma\n\n");
	scanf("%d",&islem);
			

	switch(islem){
		case 1:{
			
			if(lenSayi1<10 && lenSayi2<10){
		        printf("Birinci sayi: ");
	            scanf("%d",&num1);
	            printf("Ikinci sayi: ");
	            scanf("%d",&num2);
	            toplam = num1+num2;
	        
	            while(toplam!=0){
                    sonuc[k] = toplam%10;
					toplam = toplam/10;
					k++;	
			    }
	        }
	        
	        else if(lenSayi1>10 && lenSayi2>10){
	            printf("Birinci sayi: ");
	            scanf("%s",&sayi1);
	            printf("\nIkinci sayi: ");
	            scanf("%s",&sayi2);
	            if(lenSayi1 > lenSayi2)
		            lenMax = lenSayi1;
		
                else if(lenSayi1 < lenSayi2)
		            lenMax = lenSayi2;
		
	            else
	                lenMax = lenSayi1;
	                
	            for(i=0; i<lenMax; i++){
				
				    if(lenSayi2-1 <= -1 ){
			            sonuc[k] =(sayi1[lenSayi1-1]-48 + elde)%10;
			            elde = (sayi1[lenSayi1-1]-48)/10;
			            lenSayi1 --;
			            k++;
		            }
		            
		
		            else if(lenSayi1-1 <= -1){
			            sonuc[k] =(sayi2[lenSayi2-1]-48 + elde)%10;
			            elde = (sayi2[lenSayi2-1]-48)/10;
			            lenSayi2 --;
			            k++;
		            }
			
		
		            else{
			            sonuc[k] = (sayi1[lenSayi1-1]+sayi2[lenSayi2-1]-96 + elde) % 10;
			            elde = (sayi1[lenSayi1-1]+sayi2[lenSayi2-1]-96) /10 ;
		                lenSayi1 --;
		                lenSayi2 --;	
		                k++;
		            }
	            }
	        }
	
	        else if(lenSayi1<=10 && lenSayi2>10){
		        printf("Birinci sayi: ");
	            scanf("%d",&num1);
	            printf("Ikinci sayi: ");
	            scanf("%s",&sayi2);
	            printf("indeks:         ");
	            for(i=0; i<lenSayi2;i++){
		            printf("%d ",i);
				}
				printf("\n");
				printf("Dizi Elemanlari:");
				for(i=0; i<lenSayi2;i++){
					printf("%c ",sayi2[i]);
				}
	            if(lenSayi1 > lenSayi2)
		            lenMax = lenSayi1;
		
                else if(lenSayi1 < lenSayi2)
		            lenMax = lenSayi2;
		
	            else
	                lenMax = lenSayi1;
	                
	            for(i=0; i<lenMax; i++){
			        sonuc[k] = ((num1%10)+sayi2[lenSayi2-1]-48 + elde) % 10;
			        elde = ((num1%10)+sayi2[lenSayi2-1]-48) /10 ;
			        num1 = num1/10;
		            lenSayi2 --;	
		            k++;
		        }
	        }
	       
	        else if(lenSayi1>10 && lenSayi2<=10){
		        printf("Birinci sayi: ");
	            scanf("%s",&sayi1);
	            printf("indeks:         ");
	            for(i=0; i<lenSayi1;i++){
		            printf("%d ",i);
				}
				printf("\n");
				printf("Dizi Elemanlari:");
				for(i=0; i<lenSayi1;i++){
					printf("%c ",sayi1[i]);
				}
	            printf("Ikinci sayi: ");
	            scanf("%d",&num2);
	            if(lenSayi1 > lenSayi2)
		            lenMax = lenSayi1;
		
                else if(lenSayi1 < lenSayi2)
		            lenMax = lenSayi2;
		
	            else
	                lenMax = lenSayi1;
	                
	            for(i=0; i<lenMax; i++){
			        sonuc[k] = ((num2%10)+sayi1[lenSayi1-1]-48 + elde) % 10;
			        elde = ((num2%10)+sayi1[lenSayi1-1]-48) /10 ;
			        num2 = num2/10;
		            lenSayi1 --;	
		            k++;
	            }
	       }

	            
			
	            
			printf("\nToplam:\n\n");
	
	        for(i= k-1; i>=0; i--){
		            printf("%d\n\n",sonuc[i]);
	            }    
				    
			break;
		}
		
		case 2:{
			
			if(lenSayi1<=10 && lenSayi2<=10){
		        printf("Birinci sayi: ");
	            scanf("%d",&num1);
	            printf("Ikinci sayi: ");
	            scanf("%d",&num2);
	            cikarma = num1-num2;
	            if(num1<num2)
	                cikarma=cikarma*(-1);
	        
	            while(cikarma!=0){
                    sonuc[k] = cikarma%10;
					cikarma = cikarma/10;
					k++;	
			    }
			    printf("Cikarma:\n\n");
			    
			    if(num1<num2){
			    	printf("-\n");
				}
				
				for(i= k-1; i>=0; i--){
		            printf("%d\n\n",sonuc[i]);
	            }
	        }
	        
	        else if(lenSayi1>10 && lenSayi2>10){
	        	printf("Birinci sayi: ");
	            scanf("%s",&sayi1);
	            printf("Ikinci sayi: ");
	            scanf("%s",&sayi2);
	        		
	            if(lenSayi1 > lenSayi2)
		            lenMax = strlen(sayi1);
		
		
	            else if(lenSayi1 < lenSayi2)
		            lenMax = strlen(sayi2);
		
	            else
	                lenMax = strlen(sayi1);
	             			
			    for(i=0; i<lenMax; i++){
		            if(strlen(sayi1) == strlen(sayi2)){    
		                for(j=0; j<lenMax; j++){
		            	    if(y==0){
		                        if(sayi1[j] > sayi2[j]){
		                    	    y=1;
		                    	    break;
							    }
							
							    else if(sayi1[j] < sayi2[j]){
							        y=-1;
							        break;
							    } 
						    } 	
					    }
		                    
					    if(y==1){
			
		                    if(sayi1[lenSayi1-1] < sayi2[lenSayi2-1]){
		                        sonuc[k] = (sayi1[lenSayi1-1]-sayi2[lenSayi2-1] +10);
		                        sayi1[lenSayi1-2]--;
		                        lenSayi1 --;
	     	                    lenSayi2 --;	
	    	                    k++;
		                    }
		                 
		                    else{
		                        sonuc[k] = (sayi1[lenSayi1-1]-sayi2[lenSayi2-1]);
	    	   	                lenSayi1 --;
		                        lenSayi2 --;	
		                        k++;
		                    } 
				        }
							
					    else{
					 	
			                if(sayi2[lenSayi2-1] < sayi1[lenSayi1-1]){
		                        sonuc[k] = (sayi2[lenSayi2-1]-sayi1[lenSayi1-1] +10);
		                        sayi2[lenSayi2-2]--;
		                        lenSayi1 --;
	     	                    lenSayi2 --;	
	    	                    k++;
		                    }
		
		                     else{
		                         sonuc[k] = (sayi2[lenSayi2-1]-sayi1[lenSayi1-1]);
	    	   	                 lenSayi1 --;
		                         lenSayi2 --;	
		                         k++;
		                    }	
					    }		
				    }
			    
			        else if(lenMax == strlen(sayi2)){
		        	
			            if(lenSayi1-1 <= -1 ){
			                sonuc[k] =sayi2[lenSayi2-1]-48;
			                lenSayi2 --;
			                k++;
		                }
		            
		                else if(sayi2[lenSayi2-1] < sayi1[lenSayi1-1]){
		                    sonuc[k] = (sayi2[lenSayi2-1]-sayi1[lenSayi1-1] +10);
		                    sayi2[lenSayi2-2]--;
		                    lenSayi1 --;
	     	                lenSayi2 --;	
	    	                k++;
		                }
		            
		                else{
		                    sonuc[k] = (sayi2[lenSayi2-1]-sayi1[lenSayi1-1]);
	    	   	            lenSayi1 --;
		                    lenSayi2 --;	
		                    k++;
		                }       
		            }
		            
		            else{
		        	
		                if(lenSayi2-1 <= -1 ){
			                sonuc[k] =sayi1[lenSayi1-1]-48;
			                lenSayi1 --;
			                k++;
					    }
					
		                else if(sayi1[lenSayi1-1] < sayi2[lenSayi2-1]){
		                    sonuc[k] = (sayi1[lenSayi1-1]-sayi2[lenSayi2-1] +10);
		                    sayi1[lenSayi1-2]--;
		                    lenSayi1 --;
	     	                lenSayi2 --;	
	    	                k++;
		                }
		                
					    else{
		                    sonuc[k] = (sayi1[lenSayi1-1]-sayi2[lenSayi2-1]);
	    	   	            lenSayi1 --;
		                    lenSayi2 --;	
		                    k++;
		                }
				    }
			    }
				printf("Cikarma:\n\n");
			
	            if (y==-1){
		            printf("-\n");
		            for(i= k-1; i>=0; i--){
		                printf("%d\n\n",sonuc[i]);
	                }
	            }
	        
	            else if(y==1){
		            for(i= k-1; i>=0; i--){
		                printf("%d\n\n",sonuc[i]);
	                }
 	            }
 	        
 	            else if(y==0){
 	                for(i= k-1; i>=0; i--){
		                printf("%d\n\n",sonuc[i]);
	                }
			    }
			
	            else if(lenMax == strlen(sayi2)){
		            printf("-\n");
		            for(i= k-1; i>=0; i--){
		                printf("%d\n\n",sonuc[i]);
				    }
 	            }
 	        
			    else if(lenMax == strlen(sayi1)){
		            for(i= k-1; i>=0; i--){
		                printf("%d\n\n",sonuc[i]);
	                }	
	            }
				else if(lenMax == strlen(sayi1)){
		            for(i= k-1; i>=0; i--){
		                printf("%d\n\n",sonuc[i]);
	                }	
	            }      
		    }
		    
		    else if(lenSayi1<=10 && lenSayi2>10){
		    	printf("Birinci sayi: ");
	            scanf("%d",&num1);
	            printf("Ikinci sayi: ");
	            scanf("%s",&sayi2);
	        		
	            lenMax = lenSayi2;
	                
	            for(i=0;i<lenMax;i++){
	            	if(num1 == 0 ){
			            sonuc[k] =sayi2[lenSayi2-1]-48;
			            lenSayi2 --;
			            k++;
		            }
		            
		            else if(sayi2[lenSayi2-1]-48 < (num1%10)){
		                sonuc[k] = ((sayi2[lenSayi2-1]-48)- (num1%10) +10);
		                sayi2[lenSayi2-2]--;
		                num1=num1/10;
	     	            lenSayi2 --;	
	    	            k++;
		            }
		            
		            else{
		                sonuc[k] = ((sayi2[lenSayi2-1]-48)-(num1%10));
		                num1=num1/10;
		                lenSayi2 --;	
		                k++;
		            }
				}
		    	        
		    	printf("Cikarma:\n\n");
		    	printf("-\n");
		        for(i= k-1; i>=0; i--){
		            printf("%d\n\n",sonuc[i]);
	            }
			}
			
			else if(lenSayi1>10 && lenSayi2<=10){
		    	printf("Birinci sayi: ");
	            scanf("%s",&sayi1);
	            printf("Ikinci sayi: ");
	            scanf("%d",&num2);
	        		
	            lenMax = lenSayi1;
	                
	            for(i=0;i<lenMax;i++){
	            	if(num2 == 0 ){
			            sonuc[k] =sayi1[lenSayi1-1]-48;
			            lenSayi1 --;
			            k++;
		            }
		            
		            else if(sayi1[lenSayi1-1]-48 < (num2%10)){
		                sonuc[k] = ((num2%10)-(sayi1[lenSayi1-1]-48) +10);
		                sayi1[lenSayi1-2]--;
		                num2=num2/10;
	     	            lenSayi1 --;	
	    	            k++;
		            }
		            
		            else{
		                sonuc[k] = ((sayi1[lenSayi1-1]-48)-(num2%10));
		                num2=num2/10;
		                lenSayi1 --;	
		                k++;
		            }
				}
		    	        
		    	printf("Cikarma:\n\n");
		        for(i= k-1; i>=0; i--){
		            printf("%d\n\n",sonuc[i]);
	            }
			}
			

	        break;
	    }
		
		case 3:{
			
			if(lenSayi1<=4 && lenSayi2<=4){
		        printf("Birinci sayi: ");
	            scanf("%d",&num1);
	            printf("Ikinci sayi: ");
	            scanf("%d",&num2);
	            carpim = num1*num2;
	        
	            while(carpim!=0){
                    sonuc[k] = carpim%10;
					carpim = carpim/10;
					k++;	
			    }
	        }
	        
	        else if(lenSayi1>4 && lenSayi2>4){
	            printf("Birinci sayi: ");
	            scanf("%s",&sayi1);
	            printf("Ikinci sayi: ");
	            scanf("%s",&sayi2);
	            
	            
	            for(i=0 ; i<=29 ; i++){
					for(j =0 ;j<=29; j++){
						carpma[i][j]=0;
					}
	            }
	            	
				
				for(i=lenSayi2-1; i>= 0 ; i--){										
					for(j=lenSayi1-1 ; j >=0 ;j--){												
						gecici = (((sayi1[j]-48)*(sayi2[i]-48))+elde)%10;
						elde = (((sayi1[j]-48)*(sayi2[i]-48))+elde)/10;
						carpma[x][y++] = gecici;
						if(j == 0){
							carpma[x][y++] = elde;
						}
					}
					r=y;
					y=x+1;
					elde = 0;
					x++;
				}
				
				
				for( j=0 ; j<r ;j++ ){
					for( i=0 ;i<x;i++){
						toplam += carpma[i][j];
					}
					sonuc[k] = (toplam+elde)%10; 
					elde = (toplam+elde)/10 ;	
					toplam=0;
					k++	;
				}
	        }
	
	        else if(lenSayi1>4 && lenSayi2<=4){
		        printf("Birinci sayi: ");
	            scanf("%s",&sayi1);
	            printf("Ikinci sayi: ");
	            scanf("%d",&num2);
	                
	            for(i=0 ; i<=29 ; i++){
					for(j =0 ;j<=29; j++){
						carpma[i][j]=0;
					}
	            }
	            	
				
				for(i=lenSayi2-1; i>= 0 ; i--){										
					for(j=lenSayi1-1 ; j >=0 ;j--){												
						gecici = (((sayi1[j]-48)*(num2%10))+elde)%10;
						elde = (((sayi1[j]-48)*(num2%10))+elde)/10;
						carpma[x][y++] = gecici;
						if(j == 0){
							carpma[x][y++] = elde;
						}
					}
					num2=num2/10;
					r=y;
					y=x+1;
					elde = 0;
					x++;
				}
				
				
				for( j=0 ; j<r ;j++ ){
					for( i=0 ;i<x;i++){
						toplam += carpma[i][j];
					}
					sonuc[k] = (toplam+elde)%10; 
					elde = (toplam+elde)/10 ;	
					toplam=0;
					k++	;
				}
	        }
	       
	        else if(lenSayi1<=4 && lenSayi2>4){
		        printf("Birinci sayi: ");
	            scanf("%d",&num1);
	            printf("Ikinci sayi: ");
	            scanf("%s",&sayi2);
	                
	            for(i=0 ; i<=29 ; i++){
					for(j =0 ;j<=29; j++){
						carpma[i][j]=0;
					}
	            }
	            	
				
				for(i=lenSayi1-1; i>= 0 ; i--){										
					for(j=lenSayi2-1 ; j >=0 ;j--){												
						gecici = (((sayi2[j]-48)*(num1%10))+elde)%10;
						elde = (((sayi2[j]-48)*(num1%10))+elde)/10;
						carpma[x][y++] = gecici;
						if(j == 0){
							carpma[x][y++] = elde;
						}
					}
					num1=num1/10;
					r=y;
					y=x+1;
					elde = 0;
					x++;
				}
				
				elde = 0;
				
				for( j=0 ; j<r ;j++ ){
					for( i=0 ;i<x;i++){
						toplam += carpma[i][j];
					}
					sonuc[k] = (toplam+elde)%10; 
					elde = (toplam+elde)/10 ;	
					toplam=0;
					k++	;
				}
	        }
	       printf("Carpim:\n");
	
	        for(i= k-1; i>=0; i--){
		            printf("%d\n\n",sonuc[i]);
	            } 
	            
			break;
		}
	    
	    default: printf("Hatali bir sayi girdiniz!");
	        break;
	}
}
