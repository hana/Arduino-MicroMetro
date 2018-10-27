# Arduino MicroMetro

Simple metro working with microseconds.  

## Usage
### Installation
1. Download this Library and rename the folder name into "MicroMetro"
2. Put `Micrometro` folder into your arduino "Libraries" folder.


### Code
1. Include Library
```
#include <MicroMetro.h>
```

2. Create instance and set interval
```
MicroMetro metro = MicroMetro(1000000);	// 1000000us = 1 sec
```

3. in Loop()...
```
if(metro.bang()) {
 //do something here
}
```


# LICENSE  
These cods are licensed under [CC-BY 4.0](https://creativecommons.org/licenses/by/4.0/)    
[![CC BY](https://i.creativecommons.org/l/by/4.0/88x31.png "CC BY")](https://creativecommons.org/licenses/by/4.0/)

