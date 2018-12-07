last(X,[X]):- write("Yes").
last(X,[]):- write("No").
last(X, [_|Tail]):- last(X,Tail). 
