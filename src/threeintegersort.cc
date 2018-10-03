//
// Created by ahmed on 9/27/2018.
//

#include <iostream>

namespace edu{
    namespace vcccd {
        namespace vc{
            namespace csv13 {
                void sort( int &a,  int &b,  int &c){
                    using std::cout;
                    using std::endl;

                    int i, j;
                    int temp;
                    int order[3] = {a, b, c};
                    for (i = 0; i < ( 3 - 1 ); i++){

                        for (j = (i + 1 ); j < 3  ; j++)
                        {
                            if (order[i] > order[j])
                            {
                                temp = order[i];
                                order[i] = order[j];
                                order[j] = temp;

                            }
                        }


                    }
                    a = order[0];
                    b = order[1];
                    c = order[2];

                    cout << a << endl;
                    cout << b << endl;
                    cout << c << endl;

                    return;
                }
                }}}}