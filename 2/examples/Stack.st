Object subclass: #Stack
    instanceVariableNames: 'contents'
    classVariableNames: ''
    poolDictionaries: ''
    category: 'examples'!


!Stack methodsFor: 'initialization'!
initialize
    contents := OrderedCollection new
!!


!Stack methodsFor: 'accessing'!
push: anElement
    contents addLast: anElement
!

pop
    ^contents removeLast
!!


"add x to the Smalltalk dictionary so we can use it;
 this not necessary from the interpreter prompt"

Smalltalk at: #x put: nil!

x := Stack new!
x initialize!

x push: 1!
x push: 'hello'!
x push: x!

x pop printNl!
x pop printNl!
(x pop + 5) printNl!
