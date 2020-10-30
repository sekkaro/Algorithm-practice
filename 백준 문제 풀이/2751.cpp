#include <stdio.h>

int number, data[1000001], sorted[1000001];

void merge(int m, int middle, int n){
	int i = m;
	int j = middle + 1;
	int k = m;
	
	while(i <= middle && j <= n){
		if(data[i] <= data[j]){
			sorted[k] = data[i];
			i++;
		} else {
			sorted[k] = data[j];
			j++;
		}
		k++;
	}
	
	if(i > middle){
		for(int t = j; t <= n; t++){
			sorted[k] = data[t];
			k++;
		}
	} else {
		for(int t = i; t <= middle; t++){
			sorted[k] = data[t];
			k++;
		}
	}
	
	for(int t = m; t <= n; t++){
		data[t] = sorted[t];
	}
	
}

void mergeSort(int m, int n){
	if(m < n){
		int middle = (m + n) / 2;
		mergeSort(m, middle);
		mergeSort(middle + 1, n);
		merge(m, middle, n);
	}
}

int main(void){
	scanf("%d", &number);
	for(int i = 0; i < number; i++){
		scanf("%d", &data[i]);
	}
	mergeSort(0, number - 1);
	for(int i = 0; i < number; i++){
		printf("%d\n", data[i]);
	}
}
