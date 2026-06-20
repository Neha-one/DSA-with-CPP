# Binary Search :

### advanced version of linear search ,
### Note : binary search only allow for monotolic array.
#### ~ monotolic array : array should be in asc order of decs order.


## how to use : 
 
 ### 1. find mid ,
 ### 2. compare with mid,
  ### 2.1 if equal to mid then return mid , 
  ### 2.2 if not get then,
### 3. compare is mid greater than or less than the key,
### 4. if less than then take right side then apply from step : 2,
### 5. if greater than then take left side then apply from step : 3.

## Note : pair: use to store two values together;
### pair<int,int> p;
### cout<<p.first;
### cout<<p.second;