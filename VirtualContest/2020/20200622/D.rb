n = gets.to_i
s = n.times.map{gets.chomp}

cnt = {}
max_v = 0
s.each do |x|
  if cnt[x].nil?
    cnt[x] = 1
  else
    cnt[x] += 1
  end

  max_v = [max_v, cnt[x]].max
end

cnt.sort{|x, y| x[0] <=> y[0]}.each do |key, value|
  if value == max_v
    puts key
  end
end