#include "header.h"

double minimum(double a,double b){//aとbの小さいほうを返す関数
	if(a>=b){
		return b;
	}else{
		return a;
	}
}