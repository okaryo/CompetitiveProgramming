n = gets.to_i
s = n.times.map{gets.to_i}
q = gets.to_i
k = q.times.map{gets.to_i}

imos = Array.new(10**6 + 10, 0)
s.each do |i|
  next if i == 0
  imos[0] += 1
  imos[i + 1] -= 1
end

imos_l = imos.length
imos_l.times do |i|
  next if i == 0
  imos[i] += imos[i - 1]
end

imos.reverse!

k.each do |k_v|
  x = imos.bsearch_index{ |imos_v| imos_v > k_v}
  if x == nil
    puts 0
  else
    puts imos_l - x
  end
end

