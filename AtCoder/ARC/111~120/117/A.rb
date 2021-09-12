A,B = gets.split.map(&:to_i)
t = Array.new(1<<18, 0)
if A >= B
  A.times do |i|
    t[i] = i+1
  end
  A.upto(A+B-2) do |i|
    t[i] = -(i-A+1)
  end
  (A+B-1).times do |i|
    t[A+B-1] -= t[i]
  end
else
  (A-1).times do |i|
    t[i] = i+1
  end
  A.upto(A+B-1) do |i|
    t[i] = -(i-A+1)
  end
  (A+B).times do |i|
    if i != A-1
      t[A-1] -= t[i]
    end
  end
end
ans = ''
(A+B).times do |i|
  if i > 0
    ans << " "
  end
  ans << t[i].to_s
end
puts(ans)
