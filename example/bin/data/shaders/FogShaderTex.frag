#version 130


uniform sampler2D baseMap;


varying float fogFactor;



void main( void )
{

     vec4 baseColor = texture2D( baseMap, gl_TexCoord[0].st );

	gl_FragColor = mix(gl_Fog.color, baseColor, fogFactor );
}

