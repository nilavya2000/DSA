def c_stack():
    stack=[]
    return stack

def push(stack, item):
    stack.append(item)
    return stack


def pop(stack):
    if (len(stack)==0):
        return "EMPTY !!"
    return stack.pop()


stack=c_stack()
push(stack, str(1))
push(stack, str(2))
push(stack, str(3))
push(stack, str(4))

print("stack "+ str(stack))

print("pop last element: "+ pop(stack))

print("stack "+str(stack))
