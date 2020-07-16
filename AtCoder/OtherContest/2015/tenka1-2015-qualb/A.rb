a = [100, 100, 200]
3.upto(20) do |i|
  t = a[i-1] + a[i-2] + a[i-3]
  a << t
end

puts a[19]