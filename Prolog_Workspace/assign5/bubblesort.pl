bubbleSort(L,SL):-
 swap(L,L1),!,
 bubbleSort(L1,SL).
bubbleSort(L,L).
swap([X,Y|Rest],[Y,X|Rest]):-
 X > Y, ! .
swap([Z|Rest],[Z|Rest1]):-
 swap(Rest,Rest1).