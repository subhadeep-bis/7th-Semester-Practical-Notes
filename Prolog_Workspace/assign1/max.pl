max(X,Y):-
	Z is max(X,Y),
	format('~w is the maximum element',[Z]).

%% max(X,Y,X):-
%%     X>=Y.
%% max(X,Y,Y):- X<Y.
