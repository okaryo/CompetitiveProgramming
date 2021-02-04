s = gets.chomp
n = gets.to_i
front = true
ans = s.chars
n.times do
  q = gets.chomp
  if q[0] == '1'
    front = !front
  else
    q,f,c = q.split
    if f.to_i == 1
      if front
        ans.unshift(c)
      else
        ans.push(c)
      end
    else
      if front
        ans.push(c)
      else
        ans.unshift(c)
      end
    end
  end
end
if front
  puts ans.join
else
  puts ans.reverse.join
end
