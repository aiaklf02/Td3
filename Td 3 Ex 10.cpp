#include <iostream>
using namespace std ;
class erreur
{ public :
int num ;
} ;
class A
{ public :
A(int n)
{ if (n==1) { erreur er ; er.num = 999 ; throw er ; }
}
} ;

main()
{ void f() ;
try
{ f() ;
}
catch (erreur er)
{ cout << "dans main : " << er.num << "\n" ;
}
cout << "suite main\n" ;
} void f()
{ try
{ A a(1) ;
}
catch (erreur er)
{ cout << "dans f : " << er.num << "\n" ;
}
}
// Affichage de programme
// dans f : 999
//suite main

//--------------------------------
//Process exited after 0.1897 seconds with return value 0
//Appuyez sur une touche pour continuer...
