h,w,x,y = gets.split.map(&:to_i)
s = h.times.map{gets.chomp}
ans = 1
t = x-2
while t >= 0 do
  if s[t][y-1] == '.'
    ans += 1
    t -= 1
  else
    break
  end
end
t = x
while t < h do
  if s[t][y-1] == '.'
    ans += 1
    t += 1
  else
    break
  end
end
t = y-2
while t >= 0 do
  if s[x-1][t] == '.'
    ans += 1
    t -= 1
  else
    break
  end
end
t = y
while t < w do
  if s[x-1][t] == '.'
    ans += 1
    t += 1
  else
    break
  end
end
puts(ans)
