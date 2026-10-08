// def prime(n):
//     if n<2:
//         return False
//     for i in range(2,int(n ** 0.5)+1):
//         if n%i==0:
//             return False
//     return True
// N=int(input())
// count=0
// num=2
// while count<N:
//     while not prime(num):
//         num+=1
//     p1=num
//     num+=1
//     while not prime(num):
//         num+=1
//     p2=num
//     num+=1
//     if count<N:
//         print(p1,end=" ")
//         count+=1
//     if count<N:
//         print(p2,end=" ")
//         count+=1
//     if count<N:
//         print(p1*p2,end=" ")
//         count+=1
