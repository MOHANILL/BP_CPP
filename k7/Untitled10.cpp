#include<iostream>
using namespace std;
class matris()
{
	public:
		matrik(){mat[0][0]=0; mat[1][0]=0; mat[1][0]=0;mat[1][1]=0;}
		matris(const matris &mat2){mat[0][0]=mat2.mat[0][0];mat[0][1]=mat2.mat[0][1];mat[1][0]=mat2.mat[1][0];mat[1][1]=mat2.mat[1][1];}
		float det(){return(mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0]);}
	
	private: float mat[2][2];	
}
