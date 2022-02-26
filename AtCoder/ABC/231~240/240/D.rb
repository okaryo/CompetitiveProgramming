N = gets.to_i
A = gets.split.map(&:to_i)
q = [[A.first, 1]]
sum = 1
puts 1
1.upto(N-1) do |i|
  pv,c = q.pop
  if pv == A[i]
    if pv != c+1
      q.push([pv, c+1])
      sum += 1
    else
      sum -= c
    end
  else
    q.push([pv,c])
    q.push([A[i],1])
    sum += 1
  end
  puts sum
end
