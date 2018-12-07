doubleHeaded([],0) :- write("No").
doubleHeaded([],1) :- write("No").
doubleHeaded([H|T],2) :- write("Yes").
doubleHeaded([], N) :-
    N>=2,
    write("Yes").
doubleHeaded([H|T], N) :- 
    N1 is N+1,
    doubleHeaded(T, N1).
