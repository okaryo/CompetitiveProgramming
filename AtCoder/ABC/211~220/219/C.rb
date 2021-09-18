X = gets.chomp
N = gets.to_i
map = {}
X.each_char.with_index do |c, i|
  map[c] = i + 1
end
ans = []
N.times do
  s = gets.chomp
  w = ''
  s.each_char do |c|
    w << map[c].to_s(27)
  end
  ans << [w, s]
end
ans.sort_by {|x| x[0]}.each {|x| puts x[1]}
