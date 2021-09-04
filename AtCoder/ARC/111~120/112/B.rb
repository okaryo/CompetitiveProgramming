B,C = gets.split.map(&:to_i)
l = B - C/2
r = B
if C >= 2
  r = B + (C-2)/2
end
b = -B
c = C - 1
p = b - c/2
q = b + c/2
ans = r-l+1+q-p+1
u = [l,p].max
v = [r,q].min
if u <= v
  ans -= v-u+1
end
puts(ans)
