#include <iostream>
#include <math.h>

using namespace std;

int FindUnique(int arr[], int size){
	int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}


bool linersearch(int arr[], int size, int num){
	int check = 0;
	for(int i=0; i<size; i++){
		if(num==arr[i]){
			check++;
		}
	}
	if(check==1){
		return true;
	}
	return false;
}

void printarr(int arr[], int size){
	for(int i=0; i<=size; i++){
		cout<<arr[i]<<endl;
	}
}

int arrMax(int arr[], int size){
	int Max = INT_MIN; 
	for(int i=0; i<size; i++){
	Max = max(Max, arr[i]);		//single line function to check maximum in array
//		if(arr[i]>max){
//			max = arr[i];
//		}
	}
	return Max;
}

int arrMin(int arr[], int size){
	int Min = INT_MAX; 
	for(int i=0; i<size; i++){
		Min = min(Min, arr[i]);
//		if(arr[i]<min){
//			min = arr[i];
//		}
	}
	return Min;
}
int main(){
//	  We can initialize the array with any value by using the fill_n command
//	  void fill_n(iterator begin, int n, type value);
//    fill_n(array, till filled(size), number(value) );
//    is k zariyah say hum ek single value ko poray array may store karva sak tay hn 
//	int arr[100] = {-24};
//	fill_n(arr,101,-24);
//	for(int i=0; i<=100; i++){
//		cout<<i<<" "<<arr[i]<<endl;
//	} 
//	
//	int number[15];
//	cout<<"the value at 0 index "<<number[0]<<endl;
//	cout<<"the value at 1 index "<<number[1]<<endl;
//	cout<<"the value at 14 index "<<number[14]<<endl;
//	cout<<"the value at 39 index "<<number[39]<<endl;

//	int arr[3] = {5,4,11};
//	cout<<arr[0]<<endl;
//	cout<<arr[1]<<endl;
//	cout<<arr[2]<<endl;
//	cout<<arr[3]<<endl;
		
//	int tow[14] = {2, 8};
//	for(int i=0; i<=13; i++){
//		cout<<tow[i]<<endl;
//	}	
	
//	int fourth[10] = {0};
//	for(int i=0; i<=9; i++){
//		cout<<fourth[i]<<endl;
//	}

//	int fourth[10] = {0};
//	for(int i=1; i<=10; i++){
//		cout<<i<<" "<<fourth[i]<<endl;
//	}
	
//	char arr[7] = {'M', 'U', 'S', 'T', 'A', 'F', 'A'};
//	
//	//cout<<arr[3]<<endl;
//	for(int i=0; i<=6; i++){
//		cout<<arr[i]<<endl;
//	}
//	cout<<"Hello world!";


//	int size;
//	cin>>size;
//	
//	int arr[100];
//	
//	for(int i=0;i<size;i++){
//		cin>>arr[i];
//	}
////	cout<<"MAX: "<<arrMax(arr, size)<<endl;
////	cout<<"MIN: "<<arrMin(arr, size)<<endl;
////	
//	int sum = 0;
//	for(int i=0; i<size ;i++){
//		sum += arr[i];
//	}
//	cout<<"SUM: "<<sum;
	
	
//	int size, num, arr[100];
//	cout<<"Enter size: "<<endl;
//	cin>>size;
//	cout<<"Enter Element: "<<endl;
//	for(int i=0; i<size; i++){
//		cin>>arr[i];
//	}
//	cout<<"BEFORE  REVERSE"<<endl;
//for(int i=0; i<size; i++){
//	cout<<arr[i]<<" ";
//}

//	cout<<"Which number you want to search: "<<endl;
//	cin>>num;
//	if(linersearch(arr, size, num)==true){
//		cout<<num<<" is present"<<endl;
//	}
//	else{
//		cout<<num<<" is not present"<<endl;
//	}
	
//int start = 0;
//int end  = size-1;
//
//while(start<end){
//	swap(arr[start], arr[end]);
//	start++;
//	end--;
//}	

//int start = 0;
//int end  = size-1;
//int temp;
//while(start<end){
//	temp = arr[start];
//	arr[start] = arr[end];
//	arr[end] = temp;
//	start++;
//	end--;
//}
//
//int start = 0, i=0;
//int end  = 1;
//int temp;
//while(start<size){
//	if(start+1<size){
//	temp = arr[start];
//	arr[start] = arr[end];
//	arr[end] = temp;
//	}
//	start+=2;
//	end+=2;
//}

//for(int i=0; i<size; i+=2){
//	if(i+1<size){
//		swap(arr[i], arr[i+1]);
//	}
//}
//cout<<"\nAFTER REVERSE"<<endl;
//for(int i=0; i<size; i++){
//	cout<<arr[i]<<" ";
//}
//int mum = 0;
//for(int i=0; i<size; i++){
//	for(int j=1; j<size; j++){
//		if(arr[i]!=arr[j]){
//			mum = arr[i];
//		}
//	}
//}
//cout<<mum;
	
	//FIND UNIQUE CODENINJA 
//	int size, num, arr[100];
//	cout<<"Enter size: "<<endl;
//	cin>>size;
//	cout<<"Enter Element: "<<endl;
//	for(int i=0; i<size; i++){
//		cin>>arr[i];
//	}
//	cout<<"BEFORE  REVERSE"<<endl;
//	for(int i=0; i<size; i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<"\n The Unique is: "<<endl;
//	cout<<FindUnique(arr, size);
//		int arr[100] = {1, 2, 3, 3};
//		int arr1[100] = {3, 3};
//		int size1 =2;
//		int i=0, num, count=1;
//        int temp[100];   
//        int size = 4;   
//        for(int j=0; j<size; j++){
//        	num = arr[i];
//            if(num==arr[j]){
//                count++;
//            }
//            temp[j] = count;
//            j++;
//        }
//        for(int i=0; i<size; i++){
//        	cout<<temp[i]<<" ";
//		}
// 		int countt =1;
//		for(int i=0; i<size; ){
//			for(int j=i+1; j<size; j++){
//				if(arr[i]==arr[j]){
//					countt++;
//				}
//			}
//			temp[i] = countt;
//			i=i+countt;
//		}
//		int temp[100];
//		for(int i=0; i<size; i++){
//			for(int j=0; j<size1; j++){
//				if(arr[i]==arr1[j]){
//					temp[j] = arr[i];
//				}
//			}
//		}
//		for(int i=0; i<2; i++){
//			cout<<temp[i]<<endl;
//		}
//	
//	int n=5;
//	for(int i=0; i<n; i++){
//		cout<<i<<"\n "<<"1->g kon"<<endl;
//		for(int j=i+1; j<n; j++){
//			cout<<"2-> hn kon"<<endl;
//			for(int k=j+1; k<n; k++){
//				cout<<"3->aap kon"<<endl;
//				if(arr[i]+arr[j]+arr[k]==tar){
//					temp.push_back(arr[i]);
//					temp.push_back(arr[j]);
//					temp.push_back(arr[k]);	
//					ans.push_back(temp);				
//				}
//			}
//		}
//	}

//	int arr[100] = {0,1,0,1,1,0};
//	int n =6, temp=0;
//	int i = 0, j=n-1;
//	while(i<j){
//		if(arr[i]==0){
//			i++;
//		}
//		if(arr[j]==1){
//			j--;
//		}
//		if(arr[i]==1 && arr[j]==0){
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//	for(int i=0; i<n; i++){
//		cout<<arr[i]<<" ";
//	}
	
//	int arr[100] = {0,1,0,1,1,0};
//	int n =6, temp=0;
//	int i = 0, j=n-1;
//	while(i<j){
//		if(arr[i]==0){
//			i++;
//		}
//		if(arr[j]==1){
//			j--;
//		}
//		if(arr[i]==1 && arr[j]==0){
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//	for(int i=0; i<n; i++){
//		cout<<arr[i]<<" ";
//	}
//	int n = 8;
//	int arr[100] = {0, 1, 0, 1, 0, 0, 1, 1};
//	while(arr[n-1]==2 && arr[0]==0){
//			for(int i=0; i<n ;i++){
//        	    if(arr[i]<arr[i+1]){
//            	      swap(arr[i], arr[i+1]);
//           		 }
//      		}
//      		for(int i=0; i<n; i++){
//            	cout<<arr[i]<<" ";
//      		}
//	}

//	int n = 3;
//	int arr[100] = {2, 1, 0};
//	      int i=0, mid=0 , j=n-1;
//	      while(mid<j){
//	            if(arr[mid]==0){
//	                  swap(arr[mid], arr[i]);
//	                  i++;
//	                  mid++;
//	            }
//	            if(arr[mid]==1){
//	                  mid++;
//	            }
//	            if(arr[mid]==2){
//	                  swap(arr[mid], arr[j]);
//	                  j--;
//	            }
//	      }
//      		for(int i=0; i<n; i++){
//            	cout<<arr[i]<<" ";
//      		}	


	int n; 
	cin>>n;
	int min = INT_MAX;
	int max = INT_MIN;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
	for(int i=0; i<n; i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	cout<<"\n------------------"<<endl;
	cout<<"MAX = "<<max<<endl;
	cout<<"MIN = "<<min<<endl;
	
	
	
		
			

	return 0;
}
