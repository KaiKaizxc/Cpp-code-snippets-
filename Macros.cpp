//
// Created by admin on 10/9/2023.
//

# define PI 3.141
# define me "KAI"

# define pi 1


std::source_location location = std::source_location::current();
cout << __LINE__ << '\n';
cout << __FILE__<<'\n';

#ifdef
    std::cout << "HELLO WORLD" << '\n';
#else
    // do smth

#endif