mergesort([],[]).
mergesort([A],[A]).
mergesort([A,B|R],S):-
split([A,B|R],L1,L2),
 mergesort(L1,S1),
 mergesort(L2,S2),
 merge(S1,S2,S).
split([],[],[]).
split([A],[A],[]).
split([A,B|R],[A|R1],[B|R2]):-
 split(R,R1,R2).
merge([],[],[]).
merge(A,[],A).
merge([],A,A).
merge([A|T1],[B|T2],[A|S1]):-
 A =< B,
 merge(T1, [B|T2], S1).
merge([A|T1],[B|T2],[B|S1]):-
 B < A,
 merge([A|T1], T2, S1).