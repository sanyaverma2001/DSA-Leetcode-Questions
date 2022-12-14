def check(arr):
    for i in arr:
        if i == 0 :
            return False

    return True    
def calc(arr,p,q):

    cnt=0
    

    while check(arr):

        for i in arr:

            
            
            arr[i]=arr[i]-p
            
            cnt=cnt+1
            
            for j in range(arr):
                
                arr[j]=arr[j]-q
    return cnt            
        

        

    # return cnt        
arr=[6,4,1]   
print(calc(arr,4,1))           

