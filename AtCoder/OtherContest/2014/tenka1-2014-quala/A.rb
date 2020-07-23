ans = []
1.upto(1000) do |i|
  ans << i.to_s
end

ans.sort.each do |x|
  puts x
end
